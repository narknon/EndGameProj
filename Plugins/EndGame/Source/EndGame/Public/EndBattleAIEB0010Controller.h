#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EEndBattleEasySpawnEnableRagdollType.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAIEB0010Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEB0010Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    AEndBattleAIEB0010Controller();
    UFUNCTION(BlueprintCallable)
    void RestrictBattleFieldByDGBoss(FName ExclusionID);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSpawnTentacle(FName keyword, FName CharaSpecName, FName SocketName, bool spawnedInvisible, EEndBattleEasySpawnEnableRagdollType enableRagdollType, float deadEventDelayTime, FVector hidePosition);
    
    UFUNCTION(BlueprintCallable)
    bool RequestBreakTentacle(FName keyword);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseBattleFieldByDGBoss();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventEasySpawn(FName keyword, FName EventName);
    
};

