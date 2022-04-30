#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EEndBattleEasySpawnEnableRagdollType.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAIEB0012Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEB0012Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> BehaviorNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> BehaviorReteList;
    
    AEndBattleAIEB0012Controller();
    UFUNCTION(BlueprintCallable)
    void UpdateBehaviorRateFunc(FName Name, int32 addRate);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSpawnLeftArm(FName CharaSpecName, bool spawnedInvisible, bool spawnedDisableCollision, EEndBattleEasySpawnEnableRagdollType enableRagdollType, float deadEventDelayTime, FVector hidePosition, bool recycle);
    
    UFUNCTION(BlueprintCallable)
    bool RequestReplaceLeftArm(FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    bool RequestRepairLeftArm(FName charaPartsSpecName, FName meshLabelName);
    
    UFUNCTION(BlueprintCallable)
    bool RequestKillLeftArm(bool forceDestroy);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDestroyLeftArmActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEasySpawnEvent(FName EventName);
    
};

