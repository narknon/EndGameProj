#include "EndBattleAPI.h"

class AEndCharacter;
class AActor;
class AEndBattleAIController;
class UObject;
class AEndNavModifierVolume;
class AEndEnvironmentPhysicsStaticMeshActor;
class UEndBattleDamageSourceComponent;

float UEndBattleAPI::VecToYaw(const FVector& InVec) {
    return 0.0f;
}

float UEndBattleAPI::VecToPitch(const FVector& InVec) {
    return 0.0f;
}

void UEndBattleAPI::ValidNearFadeEnvPhysicsActor() {
}

bool UEndBattleAPI::TrySetAIPCCombatArea(const EPlayerType PlayerCharacter, int32 GroupID) {
    return false;
}

bool UEndBattleAPI::TryLayoutTransform(FName NodeName) {
    return false;
}

void UEndBattleAPI::SummonTrigger() {
}

void UEndBattleAPI::StopLoopEffect(int32 EffectHandle) {
}

void UEndBattleAPI::StopEnvironmentPhysFieldForce(FName GroupName) {
}

void UEndBattleAPI::StopBattleCameraSequence(int32 sequenceActorUID) {
}

void UEndBattleAPI::StartEnvironmentPhysFieldForce(FName GroupName) {
}

void UEndBattleAPI::SkipFadeCharaPopActor(FName ActorName) {
}

void UEndBattleAPI::ShowWaveBattleSceneNoPopTransform(FName BattleSceneID) {
}

void UEndBattleAPI::ShowWaveBattleScene(FName BattleSceneID, TArray<FTransform> enemyPopTransforms) {
}

void UEndBattleAPI::ShowPhysics(FName ActorName, bool bSimulatePhysics) {
}

void UEndBattleAPI::SetSummonInBossCutScene(bool bFlag) {
}

void UEndBattleAPI::SetStoryFlagCondition(FName storyFlagNames, bool Condition) {
}

void UEndBattleAPI::SetRewardEnable(AEndCharacter* InChara, EEndBattleRewardType InType, bool bEnable) {
}

void UEndBattleAPI::SetRedXIIIAbilityExclusionTarget(AEndCharacter* TargetCharacter) {
}

bool UEndBattleAPI::SetPartyLeader(EPlayerType Player, bool bIsInputTrigered) {
    return false;
}

void UEndBattleAPI::SetOverrideTextLabelID(AEndCharacter* InCharacter, FName InOverrideTextLabelID) {
}

void UEndBattleAPI::SetNoCheckDyningFilterTifaFlag(bool Flag) {
}

void UEndBattleAPI::SetImmotality(AEndCharacter* InChara, bool InImmotality) {
}

void UEndBattleAPI::SetHiddenVolumeRelatedBreakable(EEndBattleBreakableRelationVolumeType VolumeType, bool bHidden, const TArray<FName>& BreakableIDs) {
}

void UEndBattleAPI::SetHiddenBreakable(bool bHidden, TArray<FName> BreakableIDs) {
}

bool UEndBattleAPI::SetForceWeakConditionPointMax(AEndCharacter* TargetCharacter, int32 Number) {
    return false;
}

void UEndBattleAPI::SetFindTargetNoLimit(bool Value) {
}

void UEndBattleAPI::SetEnableSensorInfluence(EPlayerType PlayerType, bool Enable, AEndCharacter* causerCharacter) {
}

void UEndBattleAPI::SetEnableEquipmentSkillFrogAlways(bool Enable, bool frogAfterDebuffDisable) {
}

void UEndBattleAPI::SetDrawPauseEnvironmentPhysicsActors(TArray<AActor*> objectList, bool drawPause, bool tickPause) {
}

void UEndBattleAPI::SetDrawDangerArea(bool Flag) {
}

void UEndBattleAPI::SetDisplayEnemyStatusCharacter(AEndCharacter* Character) {
}

void UEndBattleAPI::SetDisableTarget(AEndCharacter* InChara, bool InDisable, bool hitDamage, bool TargetParts, bool refreshTargetLock) {
}

void UEndBattleAPI::SetCharacterMovementMode(AEndCharacter* InChara, bool bMovable, bool bHitWall, bool bHitObject, bool bFitFloor, bool bMaxWeight) {
}

void UEndBattleAPI::SetBattleSceneCountLifeCycle(FName InName, EEndBattleSceneCountLifeCycleType InType, int32 InValue) {
}

void UEndBattleAPI::SetBattleSceneCount(FName InName, int32 InCount) {
}

void UEndBattleAPI::SetBattleSafeTransform(AEndCharacter* InChara, bool bEnable) {
}

void UEndBattleAPI::SetATBAll(float Value) {
}

void UEndBattleAPI::SetATB(EPlayerType PlayerType, float Value) {
}

void UEndBattleAPI::SetAIPCToSafeArea(const EPlayerType PlayerCharacter, const bool Flag) {
}

void UEndBattleAPI::SetAIPCTargetDirectMultipleParts(const EPlayerType PlayerCharacter, AEndCharacter* TargetCharacter, TArray<FName> PartsIDList) {
}

void UEndBattleAPI::SetAIPCTargetDirect(const EPlayerType PlayerCharacter, AEndCharacter* TargetCharacter, const FName partsID, float TargetOverrideTime) {
}

void UEndBattleAPI::SetAIPCTargetChoosingParam(const EPlayerType PlayerCharacter, TArray<ETargetChoosingTag> PriorityTagList, ETargetChoosingSort SortMethod, TArray<AEndCharacter*> AssignedTargets) {
}

void UEndBattleAPI::SetAIPCTakeCover(EPlayerType PlayerCharacter, bool Flag, AEndCharacter* CoverTarget, FName CoverTargetPartsID) {
}

void UEndBattleAPI::SetAIPCFleeTargets(AEndCharacter* PlayerCharacter, TArray<AEndCharacter*> FleeTargets) {
}

void UEndBattleAPI::SetAIPCExcludeTarget(EPlayerType PlayerType, AEndCharacter* TargetCharacter) {
}

void UEndBattleAPI::SetAIPCDefenceLocation(EPlayerType PlayerType, FVector TargetLocation, float MaxDistance, float BestDistance) {
}

void UEndBattleAPI::SetAIPCDefenceActor(EPlayerType PlayerType, AActor* TargetActor, float MaxDistance, float BestDistance) {
}

void UEndBattleAPI::SetAIPCCombatDistanceOffset(const EPlayerType PlayerCharacter, float Offset, bool AlsoAbilityOffset) {
}

void UEndBattleAPI::SetActorPause(AActor* Actor, bool bTickPause, bool bDrawPause) {
}

void UEndBattleAPI::SetActorLocationAndRotationToRoot(AEndCharacter* Character, FVector NewLocation, FRotator NewRotator) {
}

void UEndBattleAPI::SetActiveBattleAIControllerFromID(AEndCharacter* InChara, int32 InID) {
}

void UEndBattleAPI::SetActiveBattleAIController(AEndCharacter* InChara, AEndBattleAIController* BattleAIController) {
}

void UEndBattleAPI::SendSystemMessage(const FString& InMessage) {
}

void UEndBattleAPI::SendMetaMessageToChara(AEndCharacter* InSend, AEndCharacter* InResv, const FString& InMessage) {
}

void UEndBattleAPI::SendMetaMessageAboutCharacter(AEndCharacter* InChara, const FString& InMessage) {
}

void UEndBattleAPI::SendMetaMessage(const FString& InMessage) {
}

void UEndBattleAPI::SendDangerWarningStaticVolume(AEndCharacter* Instigator, float Duration, int32 GroupID) {
}

void UEndBattleAPI::SendDangerWarningMultipleShape(FEndBattleAIDangerWarningParam DangerWarning) {
}

void UEndBattleAPI::SendDangerWarning(AEndCharacter* Instigator, EEndBattleAIDangerAreaType DangerAreaType, FVector CenterLocation, FVector Direction, float Radius, float Length, float Width, float Duration) {
}

void UEndBattleAPI::SendBattleMessage(TEnumAsByte<EBattleMessageTarget::Type> InTarget, const FString& InMessage) {
}

void UEndBattleAPI::RestrictBattleFieldBySummonBoss() {
}

void UEndBattleAPI::ResetSummonPointToIncreaseOneSecond() {
}

void UEndBattleAPI::ResetSummonCutSceneReturnLocation(AEndCharacter* Character) {
}

void UEndBattleAPI::ResetRedXIIIAbilityExclusionTarget() {
}

void UEndBattleAPI::ResetFreeActFromChara(AEndCharacter* InChara) {
}

void UEndBattleAPI::ResetFreeAct() {
}

void UEndBattleAPI::ResetCharacterMovementMode(AEndCharacter* InChara) {
}

void UEndBattleAPI::ResetAIPCTargetDirect(const EPlayerType PlayerCharacter) {
}

void UEndBattleAPI::ResetAIPCTargetChoosingParam(const EPlayerType PlayerCharacter) {
}

void UEndBattleAPI::ResetAIPCExcludeTarget(EPlayerType PlayerType) {
}

void UEndBattleAPI::ResetAIPCCombatArea(const EPlayerType PlayerCharacter) {
}

void UEndBattleAPI::ResetActiveBattleAIController(AEndCharacter* InChara) {
}

FName UEndBattleAPI::RequestWaveBattleSceneWithPopTransform(UObject* WorldContextObject, FName baseBattleSceneId, AEndCharacter* causerChara, EndWaveBattleSceneType Type, int32 IntegerArgument00, int32 IntegerArgument01, int32 IntegerArgument02, int32 IntegerArgument03, TArray<FTransform> popTransforms) {
    return NAME_None;
}

FName UEndBattleAPI::RequestWaveBattleScene(UObject* WorldContextObject, FName baseBattleSceneId, AEndCharacter* causerChara, EndWaveBattleSceneType Type, int32 IntegerArgument00, int32 IntegerArgument01, int32 IntegerArgument02, int32 IntegerArgument03) {
    return NAME_None;
}

void UEndBattleAPI::RequestSyncActionEnd(AEndCharacter* chara, EEndBattleSyncActionEndType Type) {
}

void UEndBattleAPI::RequestFreeActWarp(FName InName, AEndCharacter* InChara, FVector InLocation, float InYaw) {
}

void UEndBattleAPI::RequestFreeActTurn(FName InName, AEndCharacter* InChara, float InYaw, float ToleranceYaw) {
}

void UEndBattleAPI::RequestFreeActMoves(FName InName, AEndCharacter* InChara, const TArray<FVector>& InLocations, float ToleranceWalkRadius, float ToleranceGoalRadius, bool InDash) {
}

void UEndBattleAPI::RequestFreeActMove(FName InName, AEndCharacter* InChara, FVector InLocation, float ToleranceWalkRadius, float ToleranceGoalRadius, bool InDash) {
}

void UEndBattleAPI::RequestFreeActMotionEnd(FName InName, AEndCharacter* InChara, FName InEndName) {
}

void UEndBattleAPI::RequestFreeActMotion(FName InName, AEndCharacter* InChara, FName InMotionName, bool InLoop) {
}

void UEndBattleAPI::RequestAIPCExecuteAbility(AEndCharacter* TargetCharacter, const FName AbilityID, const EPlayerType PlayerCharacter) {
}

bool UEndBattleAPI::RequestAIPCAbility(EPlayerType PlayerType, FName AbilityID, AActor* TargetActor) {
    return false;
}

void UEndBattleAPI::RemoveStatusChange(EPlayerType PlayerType, EEndBattleStatusChangeType statusTypeype) {
}

void UEndBattleAPI::RemoveSpecialStatusChangeType(AEndCharacter* InChara, EEndBattleSpecialStatusChangeType InType) {
}

void UEndBattleAPI::RemoveFreeAct(FName InName) {
}

void UEndBattleAPI::RemoveCollisionIgnoreActor(AEndCharacter* ownerChara, FName IgnoreActorName) {
}

void UEndBattleAPI::RemoveAttachEffect(AEndCharacter* chara, const FName AttachSocketName, const FName ResourceName, bool bDestroy) {
}

void UEndBattleAPI::ReleaseBattleFieldBySummonBoss() {
}

void UEndBattleAPI::RefreshRole() {
}

void UEndBattleAPI::RaycastWallFromChara(AEndCharacter* InCharacter, float InOffsetYaw, float InCastRange, bool& OutHit, float& OutDistance, FHitResult& OutParam) {
}

void UEndBattleAPI::RaycastSphereWallFromChara(AEndCharacter* InCharacter, float InOffsetYaw, float InCastRange, float InRadius, bool& OutHit, float& OutDistance, FHitResult& OutParam) {
}

void UEndBattleAPI::RatioBranch8(int32 Case1, int32 Case2, int32 Case3, int32 Case4, int32 Case5, int32 Case6, int32 Case7, int32 Case8, TEnumAsByte<EEndAIBranch8::Type>& OutSignal) {
}

void UEndBattleAPI::RatioBranch7(int32 Case1, int32 Case2, int32 Case3, int32 Case4, int32 Case5, int32 Case6, int32 Case7, TEnumAsByte<EEndAIBranch7::Type>& OutSignal) {
}

void UEndBattleAPI::RatioBranch6(int32 Case1, int32 Case2, int32 Case3, int32 Case4, int32 Case5, int32 Case6, TEnumAsByte<EEndAIBranch6::Type>& OutSignal) {
}

void UEndBattleAPI::RatioBranch5(int32 Case1, int32 Case2, int32 Case3, int32 Case4, int32 Case5, TEnumAsByte<EEndAIBranch5::Type>& OutSignal) {
}

void UEndBattleAPI::RatioBranch4(int32 Case1, int32 Case2, int32 Case3, int32 Case4, TEnumAsByte<EEndAIBranch4::Type>& OutSignal) {
}

void UEndBattleAPI::RatioBranch3(int32 Case1, int32 Case2, int32 Case3, TEnumAsByte<EEndAIBranch3::Type>& OutSignal) {
}

void UEndBattleAPI::RatioBranch2(int32 Case1, int32 Case2, TEnumAsByte<EEndAIBranch2::Type>& OutSignal) {
}

void UEndBattleAPI::RangeSwitch4(float Value, float Min1, float Max1, float Min2, float Max2, float Min3, float Max3, float Min4, float Max4, bool bContainEqual, TEnumAsByte<EEndAIBranch4Other::Type>& OutSignal) {
}

void UEndBattleAPI::RangeSwitch3(float Value, float Min1, float Max1, float Min2, float Max2, float Min3, float Max3, bool bContainEqual, TEnumAsByte<EEndAIBranch3Other::Type>& OutSignal) {
}

void UEndBattleAPI::RangeSwitch2(float Value, float Min1, float Max1, float Min2, float Max2, bool bContainEqual, TEnumAsByte<EEndAIBranch2Other::Type>& OutSignal) {
}

int32 UEndBattleAPI::PlusEqualInterger(int32& ValueA, int32 ValueB) {
    return 0;
}

float UEndBattleAPI::PlusEqualFloat(float& ValueA, float ValueB) {
    return 0.0f;
}

int32 UEndBattleAPI::PlayEffect(int32 CategoryType, FName ResourceName, AActor* AttachActor, FName AttachSocketName) {
    return 0;
}

void UEndBattleAPI::PlayBreakableDestructionAnim(FName BreakableID) {
}

int32 UEndBattleAPI::PlayBattleCameraSequence(FName CameraSequenceID, AEndCharacter* ownerChara, AEndCharacter* HasResourceChara) {
    return 0;
}

void UEndBattleAPI::OverrideSummonPointToIncreaseOneSecond(float Point) {
}

void UEndBattleAPI::OverrideSummonCutSceneReturnLocation(AEndCharacter* Character, FTransform Transform) {
}

void UEndBattleAPI::OverrideSummonCaptureTimeLimit(float Time) {
}

void UEndBattleAPI::OverrideAIPCLeader(const EPlayerType PlayerCharacter, const EPlayerType NewLeader) {
}

void UEndBattleAPI::OnSummonFinishActivatePhase() {
}

void UEndBattleAPI::OnSummonActivateTriggerAction() {
}

void UEndBattleAPI::OnSeparateBodyAndRootForAIPC(AEndCharacter* Character, bool onoff) {
}

void UEndBattleAPI::NotifyHGFireWallToAIPC(bool onoff) {
}

int32 UEndBattleAPI::MulEqualInterger(int32& ValueA, int32 ValueB) {
    return 0;
}

float UEndBattleAPI::MulEqualFloat(float& ValueA, float ValueB) {
    return 0.0f;
}

int32 UEndBattleAPI::MinusEqualInterger(int32& ValueA, int32 ValueB) {
    return 0;
}

float UEndBattleAPI::MinusEqualFloat(float& ValueA, float ValueB) {
    return 0.0f;
}

bool UEndBattleAPI::IsWithinCharaEQS(AEndCharacter* InChara, FVector InPoint) {
    return false;
}

bool UEndBattleAPI::IsUniqueAbility(FName AbilityID) {
    return false;
}

bool UEndBattleAPI::IsSummonGaugeZero() {
    return false;
}

bool UEndBattleAPI::IsSummon(AEndCharacter* InChara) {
    return false;
}

bool UEndBattleAPI::IsRewardEnable(AEndCharacter* InChara, EEndBattleRewardType InType) {
    return false;
}

bool UEndBattleAPI::IsRequestWaveData(FName BattleSceneID) {
    return false;
}

bool UEndBattleAPI::IsRaceID(AEndCharacter* InChara, int32 InID) {
    return false;
}

bool UEndBattleAPI::IsPlayerPinch(const EPlayerType PlayerType) {
    return false;
}

bool UEndBattleAPI::IsPlayerCharacterValid(EPlayerType Type) {
    return false;
}

bool UEndBattleAPI::IsPlayer(AEndCharacter* InChara) {
    return false;
}

bool UEndBattleAPI::IsPartyPinch() {
    return false;
}

bool UEndBattleAPI::IsOverlapPoint(AEndNavModifierVolume* InVolume, FVector InPoint) {
    return false;
}

bool UEndBattleAPI::IsOverlapCharaFromName(FName InVolumeName, AEndCharacter* InChara) {
    return false;
}

bool UEndBattleAPI::IsNormal(FName InAbilityName) {
    return false;
}

bool UEndBattleAPI::IsMagic(FName InAbilityName) {
    return false;
}

bool UEndBattleAPI::IsLimit(FName InAbilityName) {
    return false;
}

bool UEndBattleAPI::IsLaunchActionPlaying(AEndCharacter* InChara) {
    return false;
}

bool UEndBattleAPI::IsItem(FName InAbilityName) {
    return false;
}

bool UEndBattleAPI::IsInSyncAction(AEndCharacter* chara) {
    return false;
}

bool UEndBattleAPI::IsInSummonCutScene() {
    return false;
}

bool UEndBattleAPI::IsInScreen(AActor* Actor) {
    return false;
}

bool UEndBattleAPI::IsInFanRange(AEndCharacter* OwnerCharacter, float baseYaw, float angleRange, float RadiusMin, float RadiusMax, FVector targetPosition) {
    return false;
}

bool UEndBattleAPI::IsInAIPCDangerWarning(const EPlayerType PlayerCharacter) {
    return false;
}

bool UEndBattleAPI::IsGuard(AEndCharacter* InChara) {
    return false;
}

bool UEndBattleAPI::IsFillLimitPlayer(FName PlayerCharaName) {
    return false;
}

bool UEndBattleAPI::IsExistCurrentAerialVolume() {
    return false;
}

bool UEndBattleAPI::IsEntryNavVolumeArea(AEndCharacter* InChara, TEnumAsByte<EModifierVolumeType::Type> InType) {
    return false;
}

bool UEndBattleAPI::IsDummyPartyMember(AEndCharacter* InChara) {
    return false;
}

bool UEndBattleAPI::IsDodgeResetUniqueAbility(AEndCharacter* InChara) {
    return false;
}

bool UEndBattleAPI::IsDodgeInvincible(AEndCharacter* InChara) {
    return false;
}

bool UEndBattleAPI::IsDodge(AEndCharacter* InChara) {
    return false;
}

bool UEndBattleAPI::IsDisableTarget(AEndCharacter* InChara) {
    return false;
}

bool UEndBattleAPI::IsDamageSourceFlagDisableFinish(int32 Flag) {
    return false;
}

bool UEndBattleAPI::IsDamage(AEndCharacter* InChara) {
    return false;
}

bool UEndBattleAPI::IsContainedMotionListArray(AEndCharacter* InChara, const TArray<FName>& InMot) {
    return false;
}

bool UEndBattleAPI::IsContainedMotionList5(AEndCharacter* InChara, FName InMot1, FName InMot2, FName InMot3, FName InMot4, FName InMot5) {
    return false;
}

bool UEndBattleAPI::IsContainedMotionList4(AEndCharacter* InChara, FName InMot1, FName InMot2, FName InMot3, FName InMot4) {
    return false;
}

bool UEndBattleAPI::IsContainedMotionList3(AEndCharacter* InChara, FName InMot1, FName InMot2, FName InMot3) {
    return false;
}

bool UEndBattleAPI::IsContainedMotionList2(AEndCharacter* InChara, FName InMot1, FName InMot2) {
    return false;
}

bool UEndBattleAPI::IsContainedMotionList(AEndCharacter* InChara, FName InMot1) {
    return false;
}

bool UEndBattleAPI::IsCloudOffensiveMode() {
    return false;
}

bool UEndBattleAPI::IsCheckBattleSceneFlag(TEnumAsByte<EEndAiBattleSceneFlag::Type> InType) {
    return false;
}

bool UEndBattleAPI::IsCharaID(AEndCharacter* InChara, const FName Upper, const FName Lower) {
    return false;
}

bool UEndBattleAPI::IsCharaHPP(AEndCharacter* InChara, int32 Percent, EEndAiMathCmp cmp) {
    return false;
}

void UEndBattleAPI::IsCharacterValidBranch(AEndCharacter* InCharacter, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal) {
}

bool UEndBattleAPI::IsCharacterValid(AEndCharacter* InCharacter) {
    return false;
}

bool UEndBattleAPI::IsBurst(AEndCharacter* InChara) {
    return false;
}

bool UEndBattleAPI::IsAIPCRangedWeaponEquipped(const EPlayerType PlayerCharacter) {
    return false;
}

bool UEndBattleAPI::IsAIPC(AEndCharacter* InChara) {
    return false;
}

bool UEndBattleAPI::IsAerialNormalAttack(AEndCharacter* InChara) {
    return false;
}

bool UEndBattleAPI::IsAdditiveDamagePlaying(AEndCharacter* InChara) {
    return false;
}

bool UEndBattleAPI::IsAbility(FName InAbilityName) {
    return false;
}

void UEndBattleAPI::InvalidNearFadeEnvPhysicsActor() {
}

void UEndBattleAPI::InitializeBreakable() {
}

int32 UEndBattleAPI::IncBattleSceneCount(FName InName) {
    return 0;
}

void UEndBattleAPI::HidePhysics(FName ActorName) {
}

bool UEndBattleAPI::HasStatusChangeFromChara(AEndCharacter* InChara, EEndBattleStatusChangeType statusTypeype) {
    return false;
}

bool UEndBattleAPI::HasStatusChange(EPlayerType PlayerType, EEndBattleStatusChangeType statusTypeype) {
    return false;
}

bool UEndBattleAPI::HasSpecialStatusChangeType(AEndCharacter* InChara, EEndBattleSpecialStatusChangeType InType) {
    return false;
}

bool UEndBattleAPI::HasDamageSource(AEndCharacter* InChara, FName InDamageSourceID) {
    return false;
}

bool UEndBattleAPI::HasAbilityElement(FName InAbilityName, EEndBattleAttributeType InType) {
    return false;
}

float UEndBattleAPI::GetWorldLocationAngle(const FVector& BaseLocation, const FVector& TargetLocation) {
    return 0.0f;
}

int32 UEndBattleAPI::GetWaveCount(FName InName) {
    return 0;
}

FVector UEndBattleAPI::GetVectorRange(float X, float Y, float Z, float IgnoreX, float IgnoreY, float IgnoreZ) {
    return FVector{};
}

int32 UEndBattleAPI::GetTotalWaveCount(FName InName) {
    return 0;
}

int32 UEndBattleAPI::GetTakeRequestActionCountContainedNameFromID(AEndCharacter* InCharacter, FName InName, FName Upper, FName Lower, bool InIgnoreBind) {
    return 0;
}

int32 UEndBattleAPI::GetTakeRequestActionCountContainedName(AEndCharacter* InCharacter, FName InName, bool InIgnoreBind) {
    return 0;
}

int32 UEndBattleAPI::GetTakeRequestActionCount(AEndCharacter* InCharacter, FName InName, bool InIgnoreBind) {
    return 0;
}

int32 UEndBattleAPI::GetTakeActionCount(AEndCharacter* InCharacter) {
    return 0;
}

FName UEndBattleAPI::GetSyncActionID(AEndCharacter* chara) {
    return NAME_None;
}

AEndCharacter* UEndBattleAPI::GetSummonMaster(AEndCharacter* InChara) {
    return NULL;
}

float UEndBattleAPI::GetSummonAvilableTime() {
    return 0.0f;
}

AEndCharacter* UEndBattleAPI::GetSummom(EEndBattleSummonType Type) {
    return NULL;
}

int32 UEndBattleAPI::GetStoryFlagConditionNum(TArray<FName> storyFlagNames, bool Condition, int32 initializeNum) {
    return 0;
}

int32 UEndBattleAPI::GetSpendATBBarTotal(AEndCharacter* EndCharacter) {
    return 0;
}

FTransform UEndBattleAPI::GetSocketTransform(AEndCharacter* InChara, FName InSocketName) {
    return FTransform{};
}

int32 UEndBattleAPI::GetResistanceElement(AEndCharacter* InChara, int32 InType) {
    return 0;
}

FName UEndBattleAPI::GetReplaceDamageSourceID(FName InAbilityName) {
    return NAME_None;
}

FName UEndBattleAPI::GetRaceName(AEndCharacter* InChara) {
    return NAME_None;
}

int32 UEndBattleAPI::GetRaceID(AEndCharacter* InChara) {
    return 0;
}

void UEndBattleAPI::GetPlayingExtraActionSequenceNames(TArray<FName>& outNames, AEndCharacter* InChara) {
}

EPlayerType UEndBattleAPI::GetPlayerType(AEndCharacter* InChara) {
    return EPlayerType::EPlayerType_CLOUD;
}

AEndCharacter* UEndBattleAPI::GetPlayerCharacter(EPlayerType Type) {
    return NULL;
}

TArray<AActor*> UEndBattleAPI::GetPhysicsInVolumeFromLocation(FName InVolumeName, FName LocationName, FName InName, bool InContain, bool InPossetion, bool InCanPosettion) {
    return TArray<AActor*>();
}

TArray<AEndEnvironmentPhysicsStaticMeshActor*> UEndBattleAPI::GetPhysicsFromLocation(FName LocationName) {
    return TArray<AEndEnvironmentPhysicsStaticMeshActor*>();
}

int32 UEndBattleAPI::GetPhysicsDefense(AEndCharacter* InChara) {
    return 0;
}

TArray<AActor*> UEndBattleAPI::GetPhisicsInVolume(FName InVolumeName, FName InName, bool InContain, bool InPossetion) {
    return TArray<AActor*>();
}

TArray<AActor*> UEndBattleAPI::GetPhisicsFromActorName(FName InName, bool InContain) {
    return TArray<AActor*>();
}

TArray<AActor*> UEndBattleAPI::GetPhisics(FName InName, bool InContain) {
    return TArray<AActor*>();
}

TArray<AEndCharacter*> UEndBattleAPI::GetPartyMembersIgnoreDead() {
    return TArray<AEndCharacter*>();
}

TArray<AEndNavModifierVolume*> UEndBattleAPI::GetOverlapVolumes(AEndCharacter* InChara) {
    return TArray<AEndNavModifierVolume*>();
}

FTransform UEndBattleAPI::GetOffsetTransform(const FTransform& Transform, const FVector& Offset, TEnumAsByte<GetOffsetTransform::Type> RotationType) {
    return FTransform{};
}

float UEndBattleAPI::GetObstractDistanceFromAngle(AEndCharacter* chara, float Angle) {
    return 0.0f;
}

float UEndBattleAPI::GetObstractDistanceAvarage(AEndCharacter* chara) {
    return 0.0f;
}

float UEndBattleAPI::GetObstractDistance(AEndCharacter* chara) {
    return 0.0f;
}

AEndCharacter* UEndBattleAPI::GetNearestRangePartyCharacter(AEndCharacter* InChara, float Range, bool ZVisible) {
    return NULL;
}

AActor* UEndBattleAPI::GetNearestPhysicsInVolumeFromLocation(AEndCharacter* InChara, FName InVolumeName, FName LocationName, FName InName, bool InContain, bool InPossetion, bool InCanPosettion) {
    return NULL;
}

AActor* UEndBattleAPI::GetNearestPhisicsInVolume(AEndCharacter* InChara, FName InVolumeName, FName InName, bool InContain, bool InPossetion) {
    return NULL;
}

AActor* UEndBattleAPI::GetNearestPhisicsFromActorName(AEndCharacter* InChara, FName InName, bool InContain) {
    return NULL;
}

AActor* UEndBattleAPI::GetNearestPhisics(AEndCharacter* InChara, FName InName, bool InContain) {
    return NULL;
}

FVector UEndBattleAPI::GetNearestOwnVolumeWithExtent(AEndCharacter* InChara, FVector InLocation, FVector InExtent) {
    return FVector{};
}

FVector UEndBattleAPI::GetNearestOwnVolume(AEndCharacter* InChara, FVector InLocation) {
    return FVector{};
}

AEndCharacter* UEndBattleAPI::GetNearestCharacter(FVector InLocation, TArray<AEndCharacter*> InList) {
    return NULL;
}

void UEndBattleAPI::GetNearestActor(AActor*& outActor, AActor* baseActor, const TArray<AActor*>& compareActorList, const TArray<AActor*>& ignoreActorList) {
}

TArray<AEndNavModifierVolume*> UEndBattleAPI::GetNavVolumeFromType(FName InBattleSceneID, TEnumAsByte<EModifierVolumeType::Type> InType) {
    return TArray<AEndNavModifierVolume*>();
}

AEndNavModifierVolume* UEndBattleAPI::GetNavVolumeFromAngle(AEndCharacter* InChara, float InAngleRange, EEndBattleCompareDistanceType InType, int32 InGroup, bool InBehind) {
    return NULL;
}

TArray<FName> UEndBattleAPI::GetMotionList(AEndCharacter* InChara) {
    return TArray<FName>();
}

bool UEndBattleAPI::GetMateriaParam(AEndCharacter* InChara, bool bWeapon, int32 Slot, FEndBattleAIMateriaParam& Param) {
    return false;
}

int32 UEndBattleAPI::GetMagicDefense(AEndCharacter* InChara) {
    return 0;
}

FTransform UEndBattleAPI::GetLayoutTransform(FName NodeName) {
    return FTransform{};
}

int32 UEndBattleAPI::GetKeep(AEndCharacter* InChara) {
    return 0;
}

EEndBattleCharaCategoryType UEndBattleAPI::GetHighestPriorityBattleCharaCategory(const FName& BattleSceneID) {
    return EEndBattleCharaCategoryType::Normal;
}

bool UEndBattleAPI::GetHiddenBreakable(FName BreakableID) {
    return false;
}

float UEndBattleAPI::GetGuardTime(AEndCharacter* InChara) {
    return 0.0f;
}

AEndCharacter* UEndBattleAPI::GetFarestCharacter(FVector InLocation, TArray<AEndCharacter*> InList) {
    return NULL;
}

void UEndBattleAPI::GetFarestActor(AActor*& outActor, AActor* baseActor, const TArray<AActor*>& compareActorList, const TArray<AActor*>& ignoreActorList) {
}

int32 UEndBattleAPI::GetExpectationCountInConeAreaByLocation(AEndCharacter* InCharacter, TEnumAsByte<EEndAiBattleTargetType::Type> targetType, float ConeRadius, float ConeAngle, FVector TargetLocation, float FowardVectorRotateAngle) {
    return 0;
}

int32 UEndBattleAPI::GetExpectationCountInConeArea(AEndCharacter* InCharacter, TEnumAsByte<EEndAiBattleTargetType::Type> targetType, float ConeRadius, float ConeAngle, float FowardVectorRotateAngle) {
    return 0;
}

int32 UEndBattleAPI::GetExpectationCountInCapsuleAreaByLocation(AEndCharacter* InCharacter, TEnumAsByte<EEndAiBattleTargetType::Type> targetType, float CapsuleRadius, float CapsuleLength, FVector TargetLocation, float FowardVectorRotateAngle) {
    return 0;
}

int32 UEndBattleAPI::GetExpectationCountInCapsuleArea(AEndCharacter* InCharacter, TEnumAsByte<EEndAiBattleTargetType::Type> targetType, float CapsuleRadius, float CapsuleLength, float FowardVectorRotateAngle) {
    return 0;
}

void UEndBattleAPI::GetEnemyMembersRef(TArray<AEndCharacter*>& Out) {
}

TArray<AEndCharacter*> UEndBattleAPI::GetEnemyMembersFromID(FName Upper, FName Lower, bool Flip) {
    return TArray<AEndCharacter*>();
}

TArray<AEndCharacter*> UEndBattleAPI::GetEnemyMembers(FName ContainRaceID, bool Flip) {
    return TArray<AEndCharacter*>();
}

AEndCharacter* UEndBattleAPI::GetEnemyMemberFromIDWithIndex(FName Upper, FName Lower, int32 InIndex) {
    return NULL;
}

int32 UEndBattleAPI::GetEnemyMemberCountFromID(FName Upper, FName Lower, bool Flip, bool bRemoveDummy) {
    return 0;
}

int32 UEndBattleAPI::GetEnemyMemberCount(FName ContainRaceID) {
    return 0;
}

TArray<FName> UEndBattleAPI::GetEncountBattleSceneIDs() {
    return TArray<FName>();
}

TArray<AEndCharacter*> UEndBattleAPI::GetDummyPartyMembers() {
    return TArray<AEndCharacter*>();
}

TArray<AEndCharacter*> UEndBattleAPI::GetDummyNPCsFromID(FName Upper, FName Lower) {
    return TArray<AEndCharacter*>();
}

TArray<AEndCharacter*> UEndBattleAPI::GetDummyEnemies() {
    return TArray<AEndCharacter*>();
}

void UEndBattleAPI::GetDamageSourceInfoFromDamage(FName InDamageSourceID, int32& OutTarget, int32& OutTargetParty, int32& OutCut, int32& OutProperty, int32& OutCollision, bool& OutDisableFinish, float& OutCreateDelay) {
}

void UEndBattleAPI::GetDamageSourceInfo(FName InAbilityName, int32& OutTarget, int32& OutTargetParty, int32& OutCut, int32& OutProperty, int32& OutCollision, bool& OutDisableFinish, float& OutCreateDelay) {
}

int32 UEndBattleAPI::GetDamageSourceCount(FName InDamageSourceID) {
    return 0;
}

EEndLocomotionState UEndBattleAPI::GetCurrentLocomotionState(AEndCharacter* InChara) {
    return EEndLocomotionState::Idle;
}

FName UEndBattleAPI::GetCurrentAbilityID(AEndCharacter* InChara) {
    return NAME_None;
}

float UEndBattleAPI::GetCommandLinkageMagnificate(AEndCharacter* chara) {
    return 0.0f;
}

FName UEndBattleAPI::GetCharaID(AEndCharacter* InChara) {
    return NAME_None;
}

int32 UEndBattleAPI::GetCharaHPP(AEndCharacter* InChara) {
    return 0;
}

int32 UEndBattleAPI::GetCharaHPMax(AEndCharacter* InChara) {
    return 0;
}

int32 UEndBattleAPI::GetCharaHP(AEndCharacter* InChara) {
    return 0;
}

AEndCharacter* UEndBattleAPI::GetCharaFromRaceID(FName InRaceName, int32 InID) {
    return NULL;
}

AEndCharacter* UEndBattleAPI::GetCharaFromActorName(FName InActorName) {
    return NULL;
}

void UEndBattleAPI::GetCharactersFromID(FName Upper, FName Lower, TArray<AEndCharacter*>& OutList, TArray<AEndCharacter*> InList) {
}

EEndBattleSceneSituationType UEndBattleAPI::GetBattleSceneSituationType(const FName& BattleSceneID) {
    return EEndBattleSceneSituationType::None;
}

FName UEndBattleAPI::GetBattleSceneSituationID(const FName& BattleSceneID) {
    return NAME_None;
}

FName UEndBattleAPI::GetBattleSceneIDFromChara(AEndCharacter* InChara, bool InParent) {
    return NAME_None;
}

FName UEndBattleAPI::GetBattleSceneID() {
    return NAME_None;
}

int32 UEndBattleAPI::GetBattleSceneCount(FName InName) {
    return 0;
}

int32 UEndBattleAPI::GetBattleMemberConditionList(bool dead, bool sleep, bool Stop, bool petrify, bool toad, TArray<AEndCharacter*>& memberList) {
    return 0;
}

int32 UEndBattleAPI::GetBattleCountLogIntForUCPCByBP(EEndBattleCountLogType Type, FName TargetCharaName, FName subTypeName, const FName& battleScenId) {
    return 0;
}

int32 UEndBattleAPI::GetBattleCountLogIntByBP(FName ownerCharaName, EEndBattleCountLogType Type, FName TargetCharaName, FName subTypeName, const FName& battleScenId) {
    return 0;
}

float UEndBattleAPI::GetBattleCountLogFloatForUCPCByBP(EEndBattleCountLogType Type, FName TargetCharaName, FName subTypeName, const FName& battleScenId) {
    return 0.0f;
}

float UEndBattleAPI::GetBattleCountLogFloatByBP(FName ownerCharaName, EEndBattleCountLogType Type, FName TargetCharaName, FName subTypeName, const FName& battleScenId) {
    return 0.0f;
}

bool UEndBattleAPI::GetBattleCountLogBoolForUCPCByBP(EEndBattleCountLogType Type, FName TargetCharaName, FName subTypeName, const FName& battleScenId) {
    return false;
}

bool UEndBattleAPI::GetBattleCountLogBoolByBP(FName ownerCharaName, EEndBattleCountLogType Type, FName TargetCharaName, FName subTypeName, const FName& battleScenId) {
    return false;
}

FName UEndBattleAPI::GetBattleCharaSpec_WeakCondition(AEndCharacter* InChara, int32 InIndex) {
    return NAME_None;
}

FName UEndBattleAPI::GetBattleCharaSpec_DataTableID(AEndCharacter* InChara) {
    return NAME_None;
}

float UEndBattleAPI::GetBattleAreaDistanceFromAngle(AEndCharacter* InCharacter, AEndCharacter* InTargetCharacter, float InAngle) {
    return 0.0f;
}

AEndBattleAIController* UEndBattleAPI::GetBattleAIControllerFromID(AEndCharacter* InChara, int32 InID) {
    return NULL;
}

AEndBattleAIController* UEndBattleAPI::GetBattleAI(AEndCharacter* InChara) {
    return NULL;
}

void UEndBattleAPI::GetAttackableCharacters(TArray<AEndCharacter*>& OutList, TArray<AEndCharacter*> InList) {
}

TArray<FVector> UEndBattleAPI::GetAllDamageSourceLocations(FName InFindDamageSourceID) {
    return TArray<FVector>();
}

int32 UEndBattleAPI::GetAimedCountFromID(AEndCharacter* InCharacter, FName Upper, FName Lower) {
    return 0;
}

FString UEndBattleAPI::GetAIActionAbilityTableString(FName InName, EEndBattleAIActionAbility InElem) {
    return TEXT("");
}

int32 UEndBattleAPI::GetAIActionAbilityTableInt(FName InName, EEndBattleAIActionAbility InElem) {
    return 0;
}

float UEndBattleAPI::GetAIActionAbilityTableFloat(FName InName, EEndBattleAIActionAbility InElem) {
    return 0.0f;
}

FName UEndBattleAPI::GetActorName(AEndCharacter* InChara) {
    return NAME_None;
}

float UEndBattleAPI::GetActorDistance(AActor* From, AActor* To) {
    return 0.0f;
}

FVector UEndBattleAPI::GetActorDirection(AActor* From, AActor* To) {
    return FVector{};
}

int32 UEndBattleAPI::GetAbilityElement(FName InAbilityName) {
    return 0;
}

void UEndBattleAPI::GameOverForce() {
}

void UEndBattleAPI::FinishSummonOmenEffect() {
}

TArray<AEndNavModifierVolume*> UEndBattleAPI::FindNavVolumesOutRange(AEndCharacter* Character, TArray<int32> Groups, float angleRange, EEndBattleCompareDistanceType Type, bool behind, float Distance) {
    return TArray<AEndNavModifierVolume*>();
}

TArray<AEndNavModifierVolume*> UEndBattleAPI::FindNavVolumesInRange(AEndCharacter* Character, TArray<int32> Groups, float angleRange, EEndBattleCompareDistanceType Type, bool behind, float Distance) {
    return TArray<AEndNavModifierVolume*>();
}

bool UEndBattleAPI::ExistDamageSourceRevive() {
    return false;
}

void UEndBattleAPI::EndAIPCMeleeAttackMode(const EPlayerType PlayerCharacter) {
}

void UEndBattleAPI::EndAIPCConfrontIdle(EPlayerType PlayerType) {
}

void UEndBattleAPI::EnableSelfRevive(EPlayerType PlayerType, float TimeForRevive, float HpRecoverRate) {
}

bool UEndBattleAPI::EnableFogControllerAPI(const FName& InFogName) {
    return false;
}

void UEndBattleAPI::DodgeDirection(int32 Group) {
}

int32 UEndBattleAPI::DivEqualInterger(int32& ValueA, int32 ValueB) {
    return 0;
}

float UEndBattleAPI::DivEqualFloat(float& ValueA, float ValueB) {
    return 0.0f;
}

void UEndBattleAPI::DisableSelfRevive(EPlayerType PlayerType) {
}

bool UEndBattleAPI::DisableFogControllerAPI(const FName& InFogName) {
    return false;
}

void UEndBattleAPI::DestroyDamageSourceAllCharacter(AEndCharacter* Character, bool bDestroyEffect) {
}

void UEndBattleAPI::DestroyDamageSourceAll(bool bDestroyEffect) {
}

void UEndBattleAPI::DestroyDamageSource(FName DamageSourceID, AEndCharacter* OwnerCharacter, bool bDestroyEffect) {
}

int32 UEndBattleAPI::DecBattleSceneCount(FName InName) {
    return 0;
}

void UEndBattleAPI::DebugSetHP(AEndCharacter* chara, int32 HP) {
}

void UEndBattleAPI::CreateSyncActionOwnersByName(FName syncActionID0, FName ownerCharaName0, FName syncActionID1, FName ownerCharaName1, FName syncActionID2, FName ownerCharaName2) {
}

void UEndBattleAPI::CreateSyncActionOwners(FName syncActionID0, AEndCharacter* ownerChara0, FName syncActionID1, AEndCharacter* ownerChara1, FName syncActionID2, AEndCharacter* ownerChara2) {
}

void UEndBattleAPI::CreateSyncAction(FName syncActionID, AEndCharacter* ownerChara, AEndCharacter* targetChara) {
}

void UEndBattleAPI::CreateDamageSource(FName DamageSourceID, AEndCharacter* ownerChara, AEndCharacter* targetChara, FName AbilityID, bool bOverrideDamage, int32 OverrideDamage) {
}

void UEndBattleAPI::ClearEffectsByCategoryBattle() {
}

void UEndBattleAPI::ClearDangerWarning() {
}

void UEndBattleAPI::ClearAIPCDefenceParam(EPlayerType PlayerType) {
}

bool UEndBattleAPI::CanSyncAction(AEndCharacter* chara) {
    return false;
}

void UEndBattleAPI::CancelAIPCAbilityGuard(const EPlayerType PlayerCharacter, AEndCharacter* TargetCharacter, const FName AbilityID) {
}

bool UEndBattleAPI::CalcPartyCenterLocation(FVector& outCenterLocation) {
    return false;
}

void UEndBattleAPI::BeginAIPCMeleeAttackMode(const EPlayerType PlayerCharacter) {
}

void UEndBattleAPI::BeginAIPCConfrontIdle(EPlayerType PlayerType) {
}

void UEndBattleAPI::AddDodgeCharacter(UEndBattleDamageSourceComponent* InDamageSourceComponent, AEndCharacter* InDodgeChara) {
}

void UEndBattleAPI::AddCollisionIgnoreActor(AEndCharacter* ownerChara, FName IgnoreActorName) {
}

int32 UEndBattleAPI::AddBattleSceneCount(FName InName, int32 InAddCount) {
    return 0;
}

void UEndBattleAPI::AddAttachEffect(AEndCharacter* chara, FEndCharacterAttachEffectArguments args) {
}

UEndBattleAPI::UEndBattleAPI() {
}

