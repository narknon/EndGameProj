#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "EndWaveBattleSceneType.h"
#include "UObject/NoExportTypes.h"
#include "EEndDebugFlag.h"
#include "EndFieldBGMLayer.h"
#include "EndFieldExclusion.h"
#include "EndFieldAPI.generated.h"

class AEndCharacter;
class AActor;

UCLASS(Blueprintable)
class UEndFieldAPI : public UObject {
    GENERATED_BODY()
public:
    UEndFieldAPI();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitStable(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static FName StartWaveBattleSceneReturnWaveBattleSceneId(FName baseBattleSceneId, EndWaveBattleSceneType Type, int32 IntegerArgument00, int32 IntegerArgument01, int32 IntegerArgument02, int32 IntegerArgument03, TArray<FTransform> enemyPopTransforms);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> StartWaveBattleScene(FName baseBattleSceneId, EndWaveBattleSceneType Type, int32 IntegerArgument00, int32 IntegerArgument01, int32 IntegerArgument02, int32 IntegerArgument03, TArray<FTransform> enemyPopTransforms);
    
    UFUNCTION(BlueprintCallable)
    static void SetTruthLocationName(FName truthLocationName);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverrideTargetLengthCameraFlavorByBP(FName CharaSpecID, FName dataTableCameraFlavorID);
    
    UFUNCTION(BlueprintCallable)
    static void SetExecSlotIndex(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugFlag(EEndDebugFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SendStateTriggerDirect(const FString& StateTriggerName);
    
    UFUNCTION(BlueprintCallable)
    static void SendStateTrigger(const FString& StateTriggerName);
    
    UFUNCTION(BlueprintCallable)
    static void SendPlannerEventTrigger(const FName& PlannerEventID, const FString& TriggerId);
    
    UFUNCTION(BlueprintCallable)
    static void ResetOverrideTargetLengthCameraFlavorByBP(FName CharaSpecID);
    
    UFUNCTION(BlueprintCallable)
    static bool ResetFieldAiLookAtTarget(FName TargetActorName);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshCacheBGM(const FString& cacheBGM);
    
    UFUNCTION(BlueprintCallable)
    static void PlayBGM(EndFieldBGMLayer Layer, FName BGM, float fadeStartTime, float fadeEndTime, bool crossFade);
    
    UFUNCTION(BlueprintCallable)
    static bool IsWaveCharacter(AEndCharacter* chara);
    
    UFUNCTION(BlueprintCallable)
    static bool IsWaveBattleScene(FName baseBattleSceneId, int32 waveIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool IsStable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShowEscaping();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEscaping();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEncountWaveBattleScene(FName BattleSceneID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableUpdateBattleParameter();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableSkipPauseMenu();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableFieldFullScreenMainMenu();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableFieldControler(bool bEncount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetEndTargetPointTransform(FName NodeName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetEndTargetPointLocation(FName NodeName);
    
    UFUNCTION(BlueprintCallable)
    static void FinishBattleScene(FName baseBattleSceneId);
    
    UFUNCTION(BlueprintCallable)
    static FTransform FindEndTargetPoint(FName NodeName);
    
    UFUNCTION(BlueprintCallable)
    static bool FieldAiLookAtTarget(FName TargetActorName, FName LookAtTargetActorName, FVector LookAtTargetLocation, float ReactionDistance, bool InIgnoreLookAtDeactiveAngle, bool InIsLookAwayFromActor);
    
    UFUNCTION(BlueprintCallable)
    static void ExitLoation();
    
    UFUNCTION(BlueprintCallable)
    static void EntryLocation(const FName& LocationName);
    
    UFUNCTION(BlueprintCallable)
    static void DelayFinishBattleScene(FName baseBattleSceneId, float DelayTime);
    
    UFUNCTION(BlueprintCallable)
    static void DeactivateCameraFlavorReset();
    
    UFUNCTION(BlueprintCallable)
    static void ClearDebugFlag(EEndDebugFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckExclusion(EndFieldExclusion enumValue);
    
    UFUNCTION(BlueprintCallable)
    static void CallbackCreatePlayerActor(const FName& partyActorName, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateCameraFlavorReset(float Pitch, float Yaw);
    
};

