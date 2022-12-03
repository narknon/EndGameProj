#pragma once
#include "CoreMinimal.h"
#include "EEndAiBattleTargetType.h"
#include "UObject/NoExportTypes.h"
#include "EEndBattleRewardType.h"
#include "EEndBattleAIActionAbility.h"
#include "EModifierVolumeType.h"
#include "EBattleMessageTarget.h"
#include "UObject/Object.h"
#include "EPlayerType.h"
#include "EEndAIBranch2Other.h"
#include "UObject/NoExportTypes.h"
#include "EEndBattleSceneCountLifeCycleType.h"
#include "EEndBattleBreakableRelationVolumeType.h"
#include "EEndBattleSummonType.h"
#include "EndCharacterAttachEffectArguments.h"
#include "ETargetChoosingTag.h"
#include "ETargetChoosingSort.h"
#include "EEndBattleCompareDistanceType.h"
#include "UObject/NoExportTypes.h"
#include "GetOffsetTransform.h"
#include "EndBattleAIDangerWarningParam.h"
#include "EEndBattleAIDangerAreaType.h"
#include "EndWaveBattleSceneType.h"
#include "EEndBattleAttributeType.h"
#include "EEndAiBattleSceneFlag.h"
#include "EEndBattleSyncActionEndType.h"
#include "EEndBattleStatusChangeType.h"
#include "EEndBattleSpecialStatusChangeType.h"
#include "Engine/EngineTypes.h"
#include "EEndAIBranch8.h"
#include "EEndLocomotionState.h"
#include "EEndAIBranch5.h"
#include "EEndAIBranch7.h"
#include "EEndAIBranch6.h"
#include "EEndAIBranch2.h"
#include "EEndAIBranch4.h"
#include "EEndAIBranch3.h"
#include "EEndAIBranch4Other.h"
#include "EEndAIBranchBit.h"
#include "EEndAIBranch3Other.h"
#include "EEndAiMathCmp.h"
#include "EndBattleAIMateriaParam.h"
#include "EEndBattleCharaCategoryType.h"
#include "EEndBattleSceneSituationType.h"
#include "EEndBattleCountLogType.h"
#include "EndBattleAPI.generated.h"

class AEndCharacter;
class AActor;
class AEndBattleAIController;
class UEndBattleDamageSourceComponent;
class AEndNavModifierVolume;
class AEndEnvironmentPhysicsStaticMeshActor;

UCLASS(Blueprintable)
class UEndBattleAPI : public UObject {
    GENERATED_BODY()
public:
    UEndBattleAPI();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float VecToYaw(const FVector& InVec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float VecToPitch(const FVector& InVec);
    
    UFUNCTION(BlueprintCallable)
    static void ValidNearFadeEnvPhysicsActor();
    
    UFUNCTION(BlueprintCallable)
    static bool TrySetAIPCCombatArea(const EPlayerType PlayerCharacter, int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    static bool TryLayoutTransform(FName NodeName);
    
    UFUNCTION(BlueprintCallable)
    static void SummonTrigger();
    
    UFUNCTION(BlueprintCallable)
    static void StopLoopEffect(int32 EffectHandle);
    
    UFUNCTION(BlueprintCallable)
    static void StopEnvironmentPhysFieldForce(FName GroupName);
    
    UFUNCTION(BlueprintCallable)
    static void StopBattleCameraSequence(int32 sequenceActorUID);
    
    UFUNCTION(BlueprintCallable)
    static void StartEnvironmentPhysFieldForce(FName GroupName);
    
    UFUNCTION(BlueprintCallable)
    static void SkipFadeCharaPopActor(FName ActorName);
    
    UFUNCTION(BlueprintCallable)
    static void ShowWaveBattleSceneNoPopTransform(FName BattleSceneID);
    
    UFUNCTION(BlueprintCallable)
    static void ShowWaveBattleScene(FName BattleSceneID, TArray<FTransform> enemyPopTransforms);
    
    UFUNCTION(BlueprintCallable)
    static void ShowPhysics(FName ActorName, bool bSimulatePhysics);
    
    UFUNCTION(BlueprintCallable)
    static void SetSummonInBossCutScene(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetStoryFlagCondition(FName storyFlagNames, bool Condition);
    
    UFUNCTION(BlueprintCallable)
    static void SetRewardEnable(AEndCharacter* InChara, EEndBattleRewardType InType, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetRedXIIIAbilityExclusionTarget(AEndCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool SetPartyLeader(EPlayerType Player, bool bIsInputTrigered);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverrideTextLabelID(AEndCharacter* InCharacter, FName InOverrideTextLabelID);
    
    UFUNCTION(BlueprintCallable)
    static void SetNoCheckDyningFilterTifaFlag(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetImmotality(AEndCharacter* InChara, bool InImmotality);
    
    UFUNCTION(BlueprintCallable)
    static void SetHiddenVolumeRelatedBreakable(EEndBattleBreakableRelationVolumeType VolumeType, bool bHidden, const TArray<FName>& BreakableIDs);
    
    UFUNCTION(BlueprintCallable)
    static void SetHiddenBreakable(bool bHidden, TArray<FName> BreakableIDs);
    
    UFUNCTION(BlueprintCallable)
    static bool SetForceWeakConditionPointMax(AEndCharacter* TargetCharacter, int32 Number);
    
    UFUNCTION(BlueprintCallable)
    static void SetFindTargetNoLimit(bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableSensorInfluence(EPlayerType PlayerType, bool Enable, AEndCharacter* causerCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableEquipmentSkillFrogAlways(bool Enable, bool frogAfterDebuffDisable);
    
    UFUNCTION(BlueprintCallable)
    static void SetDrawPauseEnvironmentPhysicsActors(TArray<AActor*> objectList, bool drawPause, bool tickPause);
    
    UFUNCTION(BlueprintCallable)
    static void SetDrawDangerArea(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetDisplayEnemyStatusCharacter(AEndCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void SetDisableTarget(AEndCharacter* InChara, bool InDisable, bool hitDamage, bool TargetParts, bool refreshTargetLock);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterMovementMode(AEndCharacter* InChara, bool bMovable, bool bHitWall, bool bHitObject, bool bFitFloor, bool bMaxWeight);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleSceneCountLifeCycle(FName InName, EEndBattleSceneCountLifeCycleType InType, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleSceneCount(FName InName, int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleSafeTransform(AEndCharacter* InChara, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetATBAll(float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetATB(EPlayerType PlayerType, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetAIPCToSafeArea(const EPlayerType PlayerCharacter, const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAIPCTargetDirectMultipleParts(const EPlayerType PlayerCharacter, AEndCharacter* TargetCharacter, TArray<FName> PartsIDList);
    
    UFUNCTION(BlueprintCallable)
    static void SetAIPCTargetDirect(const EPlayerType PlayerCharacter, AEndCharacter* TargetCharacter, const FName partsID, float TargetOverrideTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetAIPCTargetChoosingParam(const EPlayerType PlayerCharacter, TArray<ETargetChoosingTag> PriorityTagList, ETargetChoosingSort SortMethod, TArray<AEndCharacter*> AssignedTargets);
    
    UFUNCTION(BlueprintCallable)
    static void SetAIPCTakeCover(EPlayerType PlayerCharacter, bool Flag, AEndCharacter* CoverTarget, FName CoverTargetPartsID);
    
    UFUNCTION(BlueprintCallable)
    static void SetAIPCFleeTargets(AEndCharacter* PlayerCharacter, TArray<AEndCharacter*> FleeTargets);
    
    UFUNCTION(BlueprintCallable)
    static void SetAIPCExcludeTarget(EPlayerType PlayerType, AEndCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void SetAIPCDefenceLocation(EPlayerType PlayerType, FVector TargetLocation, float MaxDistance, float BestDistance);
    
    UFUNCTION(BlueprintCallable)
    static void SetAIPCDefenceActor(EPlayerType PlayerType, AActor* TargetActor, float MaxDistance, float BestDistance);
    
    UFUNCTION(BlueprintCallable)
    static void SetAIPCCombatDistanceOffset(const EPlayerType PlayerCharacter, float Offset, bool AlsoAbilityOffset);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorPause(AActor* Actor, bool bTickPause, bool bDrawPause);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorLocationAndRotationToRoot(AEndCharacter* Character, FVector NewLocation, FRotator NewRotator);
    
    UFUNCTION(BlueprintCallable)
    static void SetActiveBattleAIControllerFromID(AEndCharacter* InChara, int32 InID);
    
    UFUNCTION(BlueprintCallable)
    static void SetActiveBattleAIController(AEndCharacter* InChara, AEndBattleAIController* BattleAIController);
    
    UFUNCTION(BlueprintCallable)
    static void SendSystemMessage(const FString& InMessage);
    
    UFUNCTION(BlueprintCallable)
    static void SendMetaMessageToChara(AEndCharacter* InSend, AEndCharacter* InResv, const FString& InMessage);
    
    UFUNCTION(BlueprintCallable)
    static void SendMetaMessageAboutCharacter(AEndCharacter* InChara, const FString& InMessage);
    
    UFUNCTION(BlueprintCallable)
    static void SendMetaMessage(const FString& InMessage);
    
    UFUNCTION(BlueprintCallable)
    static void SendDangerWarningStaticVolume(AEndCharacter* Instigator, float Duration, int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    static void SendDangerWarningMultipleShape(FEndBattleAIDangerWarningParam DangerWarning);
    
    UFUNCTION(BlueprintCallable)
    static void SendDangerWarning(AEndCharacter* Instigator, EEndBattleAIDangerAreaType DangerAreaType, FVector CenterLocation, FVector Direction, float Radius, float Length, float Width, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void SendBattleMessage(TEnumAsByte<EBattleMessageTarget::Type> InTarget, const FString& InMessage);
    
    UFUNCTION(BlueprintCallable)
    static void RestrictBattleFieldBySummonBoss();
    
    UFUNCTION(BlueprintCallable)
    static void ResetSummonPointToIncreaseOneSecond();
    
    UFUNCTION(BlueprintCallable)
    static void ResetSummonCutSceneReturnLocation(AEndCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void ResetRedXIIIAbilityExclusionTarget();
    
    UFUNCTION(BlueprintCallable)
    static void ResetFreeActFromChara(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable)
    static void ResetFreeAct();
    
    UFUNCTION(BlueprintCallable)
    static void ResetCharacterMovementMode(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAIPCTargetDirect(const EPlayerType PlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAIPCTargetChoosingParam(const EPlayerType PlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAIPCExcludeTarget(EPlayerType PlayerType);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAIPCCombatArea(const EPlayerType PlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void ResetActiveBattleAIController(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FName RequestWaveBattleSceneWithPopTransform(UObject* WorldContextObject, FName baseBattleSceneId, AEndCharacter* causerChara, EndWaveBattleSceneType Type, int32 IntegerArgument00, int32 IntegerArgument01, int32 IntegerArgument02, int32 IntegerArgument03, TArray<FTransform> popTransforms);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FName RequestWaveBattleScene(UObject* WorldContextObject, FName baseBattleSceneId, AEndCharacter* causerChara, EndWaveBattleSceneType Type, int32 IntegerArgument00, int32 IntegerArgument01, int32 IntegerArgument02, int32 IntegerArgument03);
    
    UFUNCTION(BlueprintCallable)
    static void RequestSyncActionEnd(AEndCharacter* chara, EEndBattleSyncActionEndType Type);
    
    UFUNCTION(BlueprintCallable)
    static void RequestFreeActWarp(FName InName, AEndCharacter* InChara, FVector InLocation, float InYaw);
    
    UFUNCTION(BlueprintCallable)
    static void RequestFreeActTurn(FName InName, AEndCharacter* InChara, float InYaw, float ToleranceYaw);
    
    UFUNCTION(BlueprintCallable)
    static void RequestFreeActMoves(FName InName, AEndCharacter* InChara, const TArray<FVector>& InLocations, float ToleranceWalkRadius, float ToleranceGoalRadius, bool InDash);
    
    UFUNCTION(BlueprintCallable)
    static void RequestFreeActMove(FName InName, AEndCharacter* InChara, FVector InLocation, float ToleranceWalkRadius, float ToleranceGoalRadius, bool InDash);
    
    UFUNCTION(BlueprintCallable)
    static void RequestFreeActMotionEnd(FName InName, AEndCharacter* InChara, FName InEndName);
    
    UFUNCTION(BlueprintCallable)
    static void RequestFreeActMotion(FName InName, AEndCharacter* InChara, FName InMotionName, bool InLoop);
    
    UFUNCTION(BlueprintCallable)
    static void RequestAIPCExecuteAbility(AEndCharacter* TargetCharacter, const FName AbilityID, const EPlayerType PlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool RequestAIPCAbility(EPlayerType PlayerType, FName AbilityID, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveStatusChange(EPlayerType PlayerType, EEndBattleStatusChangeType statusTypeype);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveSpecialStatusChangeType(AEndCharacter* InChara, EEndBattleSpecialStatusChangeType InType);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveFreeAct(FName InName);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveCollisionIgnoreActor(AEndCharacter* ownerChara, FName IgnoreActorName);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAttachEffect(AEndCharacter* chara, const FName AttachSocketName, const FName ResourceName, bool bDestroy);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseBattleFieldBySummonBoss();
    
    UFUNCTION(BlueprintCallable)
    static void RefreshRole();
    
    UFUNCTION(BlueprintCallable)
    static void RaycastWallFromChara(AEndCharacter* InCharacter, float InOffsetYaw, float InCastRange, bool& OutHit, float& OutDistance, FHitResult& OutParam);
    
    UFUNCTION(BlueprintCallable)
    static void RaycastSphereWallFromChara(AEndCharacter* InCharacter, float InOffsetYaw, float InCastRange, float InRadius, bool& OutHit, float& OutDistance, FHitResult& OutParam);
    
    UFUNCTION(BlueprintCallable)
    static void RatioBranch8(int32 Case1, int32 Case2, int32 Case3, int32 Case4, int32 Case5, int32 Case6, int32 Case7, int32 Case8, TEnumAsByte<EEndAIBranch8::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable)
    static void RatioBranch7(int32 Case1, int32 Case2, int32 Case3, int32 Case4, int32 Case5, int32 Case6, int32 Case7, TEnumAsByte<EEndAIBranch7::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable)
    static void RatioBranch6(int32 Case1, int32 Case2, int32 Case3, int32 Case4, int32 Case5, int32 Case6, TEnumAsByte<EEndAIBranch6::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable)
    static void RatioBranch5(int32 Case1, int32 Case2, int32 Case3, int32 Case4, int32 Case5, TEnumAsByte<EEndAIBranch5::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable)
    static void RatioBranch4(int32 Case1, int32 Case2, int32 Case3, int32 Case4, TEnumAsByte<EEndAIBranch4::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable)
    static void RatioBranch3(int32 Case1, int32 Case2, int32 Case3, TEnumAsByte<EEndAIBranch3::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable)
    static void RatioBranch2(int32 Case1, int32 Case2, TEnumAsByte<EEndAIBranch2::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable)
    static void RangeSwitch4(float Value, float Min1, float Max1, float Min2, float Max2, float Min3, float Max3, float Min4, float Max4, bool bContainEqual, TEnumAsByte<EEndAIBranch4Other::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable)
    static void RangeSwitch3(float Value, float Min1, float Max1, float Min2, float Max2, float Min3, float Max3, bool bContainEqual, TEnumAsByte<EEndAIBranch3Other::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable)
    static void RangeSwitch2(float Value, float Min1, float Max1, float Min2, float Max2, bool bContainEqual, TEnumAsByte<EEndAIBranch2Other::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlusEqualInterger(UPARAM(Ref) int32& ValueA, int32 ValueB);
    
    UFUNCTION(BlueprintCallable)
    static float PlusEqualFloat(UPARAM(Ref) float& ValueA, float ValueB);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlayEffect(int32 CategoryType, FName ResourceName, AActor* AttachActor, FName AttachSocketName);
    
    UFUNCTION(BlueprintCallable)
    static void PlayBreakableDestructionAnim(FName BreakableID);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlayBattleCameraSequence(FName CameraSequenceID, AEndCharacter* ownerChara, AEndCharacter* HasResourceChara);
    
    UFUNCTION(BlueprintCallable)
    static void OverrideSummonPointToIncreaseOneSecond(float Point);
    
    UFUNCTION(BlueprintCallable)
    static void OverrideSummonCutSceneReturnLocation(AEndCharacter* Character, FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    static void OverrideSummonCaptureTimeLimit(float Time);
    
    UFUNCTION(BlueprintCallable)
    static void OverrideAIPCLeader(const EPlayerType PlayerCharacter, const EPlayerType NewLeader);
    
    UFUNCTION(BlueprintCallable)
    static void OnSummonFinishActivatePhase();
    
    UFUNCTION(BlueprintCallable)
    static void OnSummonActivateTriggerAction();
    
    UFUNCTION(BlueprintCallable)
    static void OnSeparateBodyAndRootForAIPC(AEndCharacter* Character, bool onoff);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyHGFireWallToAIPC(bool onoff);
    
    UFUNCTION(BlueprintCallable)
    static int32 MulEqualInterger(UPARAM(Ref) int32& ValueA, int32 ValueB);
    
    UFUNCTION(BlueprintCallable)
    static float MulEqualFloat(UPARAM(Ref) float& ValueA, float ValueB);
    
    UFUNCTION(BlueprintCallable)
    static int32 MinusEqualInterger(UPARAM(Ref) int32& ValueA, int32 ValueB);
    
    UFUNCTION(BlueprintCallable)
    static float MinusEqualFloat(UPARAM(Ref) float& ValueA, float ValueB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWithinCharaEQS(AEndCharacter* InChara, FVector InPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUniqueAbility(FName AbilityID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSummonGaugeZero();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSummon(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRewardEnable(AEndCharacter* InChara, EEndBattleRewardType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRequestWaveData(FName BattleSceneID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRaceID(AEndCharacter* InChara, int32 InID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerPinch(const EPlayerType PlayerType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerCharacterValid(EPlayerType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayer(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPartyPinch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOverlapPoint(AEndNavModifierVolume* InVolume, FVector InPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOverlapCharaFromName(FName InVolumeName, AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNormal(FName InAbilityName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMagic(FName InAbilityName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLimit(FName InAbilityName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLaunchActionPlaying(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItem(FName InAbilityName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInSyncAction(AEndCharacter* chara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInSummonCutScene();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInScreen(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInFanRange(AEndCharacter* OwnerCharacter, float baseYaw, float angleRange, float RadiusMin, float RadiusMax, FVector targetPosition);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInAIPCDangerWarning(const EPlayerType PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGuard(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFillLimitPlayer(FName PlayerCharaName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExistCurrentAerialVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEntryNavVolumeArea(AEndCharacter* InChara, TEnumAsByte<EModifierVolumeType::Type> InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDummyPartyMember(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDodgeResetUniqueAbility(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDodgeInvincible(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDodge(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDisableTarget(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDamageSourceFlagDisableFinish(int32 Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDamage(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsContainedMotionListArray(AEndCharacter* InChara, const TArray<FName>& InMot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsContainedMotionList5(AEndCharacter* InChara, FName InMot1, FName InMot2, FName InMot3, FName InMot4, FName InMot5);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsContainedMotionList4(AEndCharacter* InChara, FName InMot1, FName InMot2, FName InMot3, FName InMot4);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsContainedMotionList3(AEndCharacter* InChara, FName InMot1, FName InMot2, FName InMot3);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsContainedMotionList2(AEndCharacter* InChara, FName InMot1, FName InMot2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsContainedMotionList(AEndCharacter* InChara, FName InMot1);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCloudOffensiveMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCheckBattleSceneFlag(TEnumAsByte<EEndAiBattleSceneFlag::Type> InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharaID(AEndCharacter* InChara, const FName Upper, const FName Lower);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharaHPP(AEndCharacter* InChara, int32 Percent, EEndAiMathCmp cmp);
    
    UFUNCTION(BlueprintCallable)
    static void IsCharacterValidBranch(AEndCharacter* InCharacter, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharacterValid(AEndCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBurst(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAIPCRangedWeaponEquipped(const EPlayerType PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAIPC(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAerialNormalAttack(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAdditiveDamagePlaying(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAbility(FName InAbilityName);
    
    UFUNCTION(BlueprintCallable)
    static void InvalidNearFadeEnvPhysicsActor();
    
    UFUNCTION(BlueprintCallable)
    static void InitializeBreakable();
    
    UFUNCTION(BlueprintCallable)
    static int32 IncBattleSceneCount(FName InName);
    
    UFUNCTION(BlueprintCallable)
    static void HidePhysics(FName ActorName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasStatusChangeFromChara(AEndCharacter* InChara, EEndBattleStatusChangeType statusTypeype);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasStatusChange(EPlayerType PlayerType, EEndBattleStatusChangeType statusTypeype);
    
    UFUNCTION(BlueprintCallable)
    static bool HasSpecialStatusChangeType(AEndCharacter* InChara, EEndBattleSpecialStatusChangeType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasDamageSource(AEndCharacter* InChara, FName InDamageSourceID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAbilityElement(FName InAbilityName, EEndBattleAttributeType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWorldLocationAngle(const FVector& BaseLocation, const FVector& TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWaveCount(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetVectorRange(float X, float Y, float Z, float IgnoreX, float IgnoreY, float IgnoreZ);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTotalWaveCount(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTakeRequestActionCountContainedNameFromID(AEndCharacter* InCharacter, FName InName, FName Upper, FName Lower, bool InIgnoreBind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTakeRequestActionCountContainedName(AEndCharacter* InCharacter, FName InName, bool InIgnoreBind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTakeRequestActionCount(AEndCharacter* InCharacter, FName InName, bool InIgnoreBind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTakeActionCount(AEndCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetSyncActionID(AEndCharacter* chara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AEndCharacter* GetSummonMaster(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSummonAvilableTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AEndCharacter* GetSummom(EEndBattleSummonType Type);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStoryFlagConditionNum(TArray<FName> storyFlagNames, bool Condition, int32 initializeNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSpendATBBarTotal(AEndCharacter* EndCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetSocketTransform(AEndCharacter* InChara, FName InSocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetResistanceElement(AEndCharacter* InChara, int32 InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetReplaceDamageSourceID(FName InAbilityName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetRaceName(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRaceID(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPlayingExtraActionSequenceNames(TArray<FName>& outNames, AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPlayerType GetPlayerType(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AEndCharacter* GetPlayerCharacter(EPlayerType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AActor*> GetPhysicsInVolumeFromLocation(FName InVolumeName, FName LocationName, FName InName, bool InContain, bool InPossetion, bool InCanPosettion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AEndEnvironmentPhysicsStaticMeshActor*> GetPhysicsFromLocation(FName LocationName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPhysicsDefense(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AActor*> GetPhisicsInVolume(FName InVolumeName, FName InName, bool InContain, bool InPossetion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AActor*> GetPhisicsFromActorName(FName InName, bool InContain);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AActor*> GetPhisics(FName InName, bool InContain);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AEndCharacter*> GetPartyMembersIgnoreDead();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AEndNavModifierVolume*> GetOverlapVolumes(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetOffsetTransform(const FTransform& Transform, const FVector& Offset, TEnumAsByte<GetOffsetTransform::Type> RotationType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetObstractDistanceFromAngle(AEndCharacter* chara, float Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetObstractDistanceAvarage(AEndCharacter* chara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetObstractDistance(AEndCharacter* chara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AEndCharacter* GetNearestRangePartyCharacter(AEndCharacter* InChara, float Range, bool ZVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetNearestPhysicsInVolumeFromLocation(AEndCharacter* InChara, FName InVolumeName, FName LocationName, FName InName, bool InContain, bool InPossetion, bool InCanPosettion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetNearestPhisicsInVolume(AEndCharacter* InChara, FName InVolumeName, FName InName, bool InContain, bool InPossetion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetNearestPhisicsFromActorName(AEndCharacter* InChara, FName InName, bool InContain);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetNearestPhisics(AEndCharacter* InChara, FName InName, bool InContain);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetNearestOwnVolumeWithExtent(AEndCharacter* InChara, FVector InLocation, FVector InExtent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetNearestOwnVolume(AEndCharacter* InChara, FVector InLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AEndCharacter* GetNearestCharacter(FVector InLocation, TArray<AEndCharacter*> InList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetNearestActor(AActor*& outActor, AActor* baseActor, const TArray<AActor*>& compareActorList, const TArray<AActor*>& ignoreActorList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AEndNavModifierVolume*> GetNavVolumeFromType(FName InBattleSceneID, TEnumAsByte<EModifierVolumeType::Type> InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AEndNavModifierVolume* GetNavVolumeFromAngle(AEndCharacter* InChara, float InAngleRange, EEndBattleCompareDistanceType InType, int32 InGroup, bool InBehind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetMotionList(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMateriaParam(AEndCharacter* InChara, bool bWeapon, int32 Slot, FEndBattleAIMateriaParam& Param);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMagicDefense(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetLayoutTransform(FName NodeName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetKeep(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EEndBattleCharaCategoryType GetHighestPriorityBattleCharaCategory(const FName& BattleSceneID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetHiddenBreakable(FName BreakableID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGuardTime(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AEndCharacter* GetFarestCharacter(FVector InLocation, TArray<AEndCharacter*> InList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetFarestActor(AActor*& outActor, AActor* baseActor, const TArray<AActor*>& compareActorList, const TArray<AActor*>& ignoreActorList);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetExpectationCountInConeAreaByLocation(AEndCharacter* InCharacter, TEnumAsByte<EEndAiBattleTargetType::Type> targetType, float ConeRadius, float ConeAngle, FVector TargetLocation, float FowardVectorRotateAngle);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetExpectationCountInConeArea(AEndCharacter* InCharacter, TEnumAsByte<EEndAiBattleTargetType::Type> targetType, float ConeRadius, float ConeAngle, float FowardVectorRotateAngle);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetExpectationCountInCapsuleAreaByLocation(AEndCharacter* InCharacter, TEnumAsByte<EEndAiBattleTargetType::Type> targetType, float CapsuleRadius, float CapsuleLength, FVector TargetLocation, float FowardVectorRotateAngle);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetExpectationCountInCapsuleArea(AEndCharacter* InCharacter, TEnumAsByte<EEndAiBattleTargetType::Type> targetType, float CapsuleRadius, float CapsuleLength, float FowardVectorRotateAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetEnemyMembersRef(TArray<AEndCharacter*>& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AEndCharacter*> GetEnemyMembersFromID(FName Upper, FName Lower, bool Flip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AEndCharacter*> GetEnemyMembers(FName ContainRaceID, bool Flip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AEndCharacter* GetEnemyMemberFromIDWithIndex(FName Upper, FName Lower, int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEnemyMemberCountFromID(FName Upper, FName Lower, bool Flip, bool bRemoveDummy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEnemyMemberCount(FName ContainRaceID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetEncountBattleSceneIDs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AEndCharacter*> GetDummyPartyMembers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AEndCharacter*> GetDummyNPCsFromID(FName Upper, FName Lower);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AEndCharacter*> GetDummyEnemies();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDamageSourceInfoFromDamage(FName InDamageSourceID, int32& OutTarget, int32& OutTargetParty, int32& OutCut, int32& OutProperty, int32& OutCollision, bool& OutDisableFinish, float& OutCreateDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDamageSourceInfo(FName InAbilityName, int32& OutTarget, int32& OutTargetParty, int32& OutCut, int32& OutProperty, int32& OutCollision, bool& OutDisableFinish, float& OutCreateDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDamageSourceCount(FName InDamageSourceID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EEndLocomotionState GetCurrentLocomotionState(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetCurrentAbilityID(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCommandLinkageMagnificate(AEndCharacter* chara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetCharaID(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharaHPP(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharaHPMax(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharaHP(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AEndCharacter* GetCharaFromRaceID(FName InRaceName, int32 InID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AEndCharacter* GetCharaFromActorName(FName InActorName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCharactersFromID(FName Upper, FName Lower, TArray<AEndCharacter*>& OutList, TArray<AEndCharacter*> InList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EEndBattleSceneSituationType GetBattleSceneSituationType(const FName& BattleSceneID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetBattleSceneSituationID(const FName& BattleSceneID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetBattleSceneIDFromChara(AEndCharacter* InChara, bool InParent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetBattleSceneID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBattleSceneCount(FName InName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBattleMemberConditionList(bool dead, bool sleep, bool Stop, bool petrify, bool toad, TArray<AEndCharacter*>& memberList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBattleCountLogIntForUCPCByBP(EEndBattleCountLogType Type, FName TargetCharaName, FName subTypeName, const FName& battleScenId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBattleCountLogIntByBP(FName ownerCharaName, EEndBattleCountLogType Type, FName TargetCharaName, FName subTypeName, const FName& battleScenId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBattleCountLogFloatForUCPCByBP(EEndBattleCountLogType Type, FName TargetCharaName, FName subTypeName, const FName& battleScenId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBattleCountLogFloatByBP(FName ownerCharaName, EEndBattleCountLogType Type, FName TargetCharaName, FName subTypeName, const FName& battleScenId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBattleCountLogBoolForUCPCByBP(EEndBattleCountLogType Type, FName TargetCharaName, FName subTypeName, const FName& battleScenId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBattleCountLogBoolByBP(FName ownerCharaName, EEndBattleCountLogType Type, FName TargetCharaName, FName subTypeName, const FName& battleScenId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetBattleCharaSpec_WeakCondition(AEndCharacter* InChara, int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetBattleCharaSpec_DataTableID(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBattleAreaDistanceFromAngle(AEndCharacter* InCharacter, AEndCharacter* InTargetCharacter, float InAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AEndBattleAIController* GetBattleAIControllerFromID(AEndCharacter* InChara, int32 InID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AEndBattleAIController* GetBattleAI(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAttackableCharacters(TArray<AEndCharacter*>& OutList, TArray<AEndCharacter*> InList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> GetAllDamageSourceLocations(FName InFindDamageSourceID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAimedCountFromID(AEndCharacter* InCharacter, FName Upper, FName Lower);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAIActionAbilityTableString(FName InName, EEndBattleAIActionAbility InElem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAIActionAbilityTableInt(FName InName, EEndBattleAIActionAbility InElem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAIActionAbilityTableFloat(FName InName, EEndBattleAIActionAbility InElem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetActorName(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetActorDistance(AActor* From, AActor* To);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetActorDirection(AActor* From, AActor* To);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAbilityElement(FName InAbilityName);
    
    UFUNCTION(BlueprintCallable)
    static void GameOverForce();
    
    UFUNCTION(BlueprintCallable)
    static void FinishSummonOmenEffect();
    
    UFUNCTION(BlueprintCallable)
    static TArray<AEndNavModifierVolume*> FindNavVolumesOutRange(AEndCharacter* Character, TArray<int32> Groups, float angleRange, EEndBattleCompareDistanceType Type, bool behind, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AEndNavModifierVolume*> FindNavVolumesInRange(AEndCharacter* Character, TArray<int32> Groups, float angleRange, EEndBattleCompareDistanceType Type, bool behind, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static bool ExistDamageSourceRevive();
    
    UFUNCTION(BlueprintCallable)
    static void EndAIPCMeleeAttackMode(const EPlayerType PlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void EndAIPCConfrontIdle(EPlayerType PlayerType);
    
    UFUNCTION(BlueprintCallable)
    static void EnableSelfRevive(EPlayerType PlayerType, float TimeForRevive, float HpRecoverRate);
    
    UFUNCTION(BlueprintCallable)
    static bool EnableFogControllerAPI(const FName& InFogName);
    
    UFUNCTION(BlueprintCallable)
    static void DodgeDirection(int32 Group);
    
    UFUNCTION(BlueprintCallable)
    static int32 DivEqualInterger(UPARAM(Ref) int32& ValueA, int32 ValueB);
    
    UFUNCTION(BlueprintCallable)
    static float DivEqualFloat(UPARAM(Ref) float& ValueA, float ValueB);
    
    UFUNCTION(BlueprintCallable)
    static void DisableSelfRevive(EPlayerType PlayerType);
    
    UFUNCTION(BlueprintCallable)
    static bool DisableFogControllerAPI(const FName& InFogName);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyDamageSourceAllCharacter(AEndCharacter* Character, bool bDestroyEffect);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyDamageSourceAll(bool bDestroyEffect);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyDamageSource(FName DamageSourceID, AEndCharacter* OwnerCharacter, bool bDestroyEffect);
    
    UFUNCTION(BlueprintCallable)
    static int32 DecBattleSceneCount(FName InName);
    
    UFUNCTION(BlueprintCallable)
    static void DebugSetHP(AEndCharacter* chara, int32 HP);
    
    UFUNCTION(BlueprintCallable)
    static void CreateSyncActionOwnersByName(FName syncActionID0, FName ownerCharaName0, FName syncActionID1, FName ownerCharaName1, FName syncActionID2, FName ownerCharaName2);
    
    UFUNCTION(BlueprintCallable)
    static void CreateSyncActionOwners(FName syncActionID0, AEndCharacter* ownerChara0, FName syncActionID1, AEndCharacter* ownerChara1, FName syncActionID2, AEndCharacter* ownerChara2);
    
    UFUNCTION(BlueprintCallable)
    static void CreateSyncAction(FName syncActionID, AEndCharacter* ownerChara, AEndCharacter* targetChara);
    
    UFUNCTION(BlueprintCallable)
    static void CreateDamageSource(FName DamageSourceID, AEndCharacter* ownerChara, AEndCharacter* targetChara, FName AbilityID, bool bOverrideDamage, int32 OverrideDamage);
    
    UFUNCTION(BlueprintCallable)
    static void ClearEffectsByCategoryBattle();
    
    UFUNCTION(BlueprintCallable)
    static void ClearDangerWarning();
    
    UFUNCTION(BlueprintCallable)
    static void ClearAIPCDefenceParam(EPlayerType PlayerType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanSyncAction(AEndCharacter* chara);
    
    UFUNCTION(BlueprintCallable)
    static void CancelAIPCAbilityGuard(const EPlayerType PlayerCharacter, AEndCharacter* TargetCharacter, const FName AbilityID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CalcPartyCenterLocation(FVector& outCenterLocation);
    
    UFUNCTION(BlueprintCallable)
    static void BeginAIPCMeleeAttackMode(const EPlayerType PlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void BeginAIPCConfrontIdle(EPlayerType PlayerType);
    
    UFUNCTION(BlueprintCallable)
    static void AddDodgeCharacter(UEndBattleDamageSourceComponent* InDamageSourceComponent, AEndCharacter* InDodgeChara);
    
    UFUNCTION(BlueprintCallable)
    static void AddCollisionIgnoreActor(AEndCharacter* ownerChara, FName IgnoreActorName);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddBattleSceneCount(FName InName, int32 InAddCount);
    
    UFUNCTION(BlueprintCallable)
    static void AddAttachEffect(AEndCharacter* chara, FEndCharacterAttachEffectArguments args);
    
};

