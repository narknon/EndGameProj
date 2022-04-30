#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EEndBattleSceneCharaStateType.h"
#include "EEndBattleStatusChangeType.h"
#include "EPlayerType.h"
#include "EEndBattleAttributeType.h"
#include "EEndBattleSpecialStatusChangeType.h"
#include "UObject/NoExportTypes.h"
#include "EEndBattleCountLogType.h"
#include "EndDataTableBattleScene.h"
#include "EndDataTableBattleDamageSource.h"
#include "Engine/LatentActionManager.h"
#include "EndBattleSceneBlueprint.generated.h"

class AEndCharacter;

UCLASS(Blueprintable)
class AEndBattleSceneBlueprint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickNewlySpawned;
    
    AEndBattleSceneBlueprint();
    UFUNCTION(BlueprintCallable)
    void SwitchCharaState(EEndBattleSceneCharaStateType& State, FName CharaName, bool bExecInState);
    
    UFUNCTION(BlueprintCallable)
    void SetPhase(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHPByBattleSceneCharacterIndex(int32 srcCharacterIndex, int32 destCharacterIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetAIPCControllerTick(EPlayerType PlayerType, bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveStatusChange(const FName CharaName, const TArray<EEndBattleStatusChangeType>& Types);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTakeDamageSpecialStatus(FName characterName, EEndBattleSpecialStatusChangeType specialStatus, FName abilityName, float damageParcent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTakeDamage(int32 Damage, const FName& CauserCharaName, const FName& DamagedCharaName, const FName& AbilityID, bool bBind, bool bGuard, bool bDodge, const FName& hitBoneName, bool bAttributeHit, const FName& DamageSourceID, EEndBattleAttributeType DmgSrcAttributeType, float justHitRotYaw, const FVector& hitPosition, bool bHeal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowMenuGameOver();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadyBattleTalk(FName BattleSceneID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMotionMessage(FName CharaName, FName motionName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMetaMessage(const FString& InMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIncrementBattleCountPerID(FName CauserCharaName, FName TargetCharaName, EEndBattleCountLogType Type, FName ID, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitBattleScene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntryBattleSceneWave(const FName& BattleSceneID, const FName& baseBattleSceneId, const FEndDataTableBattleScene& dataTableBattleScene);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntryBattleSceneAfter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntryBattleScene(const FName& BattleSceneID, const FEndDataTableBattleScene& dataTableBattleScene);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndTalkTriggerBoxCollide(FName TriggerBoxActorName, FName CollideCharaName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndRailCamera(const FName& RailCameraID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndLinkCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndFreeAct(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDLCSummonUltimateMagicEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompletedTalkState(FName TalkStateId, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCollideBattleTalkColideBox(FName ColideBoxName, AEndCharacter* ownerChara, FName DamageSourceID, const FEndDataTableBattleDamageSource& DamageSourceDataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharaSyncAction(const FName& AttackedCharaName, const FName& ReceivedCharaName, const FName& StateId, int32 StateCount, const FName& syncActionID, const FName& CauserCharaName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCharaSpecialStatusChange(const FName& ownerCharaName, const FName& SpecialStatusChangeID, EEndBattleSpecialStatusChangeType Type, const FName& StateId, const TArray<float>& Params, const TArray<FName>& ParamIDs, const TArray<AActor*>& ParamActors);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCharaPartsDamage(FName CauserCharaName, FName DamagedCharaName, FName partsID, FName CategoryID, int32 RemainHP, float RemainHPPer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharaPartsBreak(FName CauserCharaName, FName BrokenCharaName, FName partsID, FName CategoryID, int32 CategoryBreakCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginTalkTriggerBoxCollide(FName TriggerBoxActorName, FName CollideCharaName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginLinkCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPhase() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceAIPCUseAbility(EPlayerType PlayerType, FName AbilityID, AEndCharacter* Target, FName TargetPartsID);
    
    UFUNCTION(BlueprintCallable)
    FName ConvertMultiTalkPlayTriggerID(FName TalkPlayTriggerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangePhase(int32 _phase);
    
    UFUNCTION(BlueprintCallable)
    void BattleSceneDelay(float Duration, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddStatusChange(const FName CharaName, const TArray<EEndBattleStatusChangeType>& Types);
    
};

