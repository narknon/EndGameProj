#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EEndBattleEasySpawnEnableRagdollType.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAIEB0026Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEB0026Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    AEndBattleAIEB0026Controller();
protected:
    UFUNCTION(BlueprintCallable)
    bool RequestSpawnTip(FName CharaSpecName, bool spawnedInvisible, bool spawnedDisableCollision, EEndBattleEasySpawnEnableRagdollType enableRagdollType, float destroyTimer, FVector hidePosition);
    
public:
    UFUNCTION(BlueprintCallable)
    bool RequestSpawnTentacle(FName keyword, FName CharaSpecName, FName SocketName, bool spawnedInvisible, EEndBattleEasySpawnEnableRagdollType enableRagdollType, float deadEventDelayTime, FVector hidePosition);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool RequestReplaceTip(FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    bool RequestKillTip(bool forceDestroy);
    
public:
    UFUNCTION(BlueprintCallable)
    bool RequestBreakTentacle(FName keyword);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventEasySpawn(FName keyword, FName EventName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEasySpawnEvent(FName EventName);
    
};

