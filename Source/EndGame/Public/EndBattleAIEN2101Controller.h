#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EEndBattleEasySpawnEnableRagdollType.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAIEN2101Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEN2101Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    AEndBattleAIEN2101Controller();
    UFUNCTION(BlueprintCallable)
    bool RequestSpawnRightArm(FName CharaSpecName, bool spawnedInvisible, bool spawnedDisableCollision, EEndBattleEasySpawnEnableRagdollType enableRagdollType, float deadEventDelayTime, FVector hidePosition, bool recycle);
    
    UFUNCTION(BlueprintCallable)
    bool RequestReplaceRightArm(FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    bool RequestRepairRightArm(FName charaPartsSpecName, FName meshLabelName);
    
    UFUNCTION(BlueprintCallable)
    bool RequestKillRightArm(bool forceDestroy);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDestroyRightArmActor();
    
    UFUNCTION(BlueprintCallable)
    bool RequestBreakRightArm(FName charaPartsSpecName, FName SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEasySpawnEvent(FName EventName);
    
};

