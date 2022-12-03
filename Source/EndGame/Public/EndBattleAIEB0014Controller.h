#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EEndBattleEasySpawnEnableRagdollType.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAIEB0014Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEB0014Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    AEndBattleAIEB0014Controller();
protected:
    UFUNCTION(BlueprintCallable)
    void RequestUniqueRotate(float Yaw, float dulation);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSpawnTentacle(FName keyword, FName CharaSpecName, FName SocketName, bool spawnedInvisible, EEndBattleEasySpawnEnableRagdollType enableRagdollType, float deadEventDelayTime, FVector hidePosition);
    
    UFUNCTION(BlueprintCallable)
    int32 RequestPartsSpawn(FName keyword);
    
    UFUNCTION(BlueprintCallable)
    void RequestPartsKill(FName keyword, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    bool RequestBreakTentacle(FName keyword);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRotateEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventEasySpawn(FName keyword, FName EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDiedParts(FName keyword);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCanUseParts(FName keyword);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLayoutDistanceStatus(FName InName, float InMax, float InMin);
    
};

