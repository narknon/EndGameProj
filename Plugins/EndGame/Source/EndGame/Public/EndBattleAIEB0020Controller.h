#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAIEB0020Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEB0020Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    AEndBattleAIEB0020Controller();
    UFUNCTION(BlueprintCallable)
    bool RequestSpawnParts(FName keyword, FName CharaSpecName, bool spawnedInvisible, bool updateSpawn, float respawnTime);
    
    UFUNCTION(BlueprintCallable)
    void RequestPraecoTurnToPoint(FVector InLocation, float InTime);
    
    UFUNCTION(BlueprintCallable)
    void RequestPraecoTurn(float InYaw, float InTime);
    
    UFUNCTION(BlueprintCallable)
    bool RequestBreakParts(FName keyword, FName brokenAnimationName, bool syncPlayMotion, float BlendInTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEasySpawnEvent(FName keywordName, FName EventName);
    
};

