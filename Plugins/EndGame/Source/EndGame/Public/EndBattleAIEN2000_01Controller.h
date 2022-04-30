#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EndBattleAIEN2000_01Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEN2000_01Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    AEndBattleAIEN2000_01Controller();
    UFUNCTION(BlueprintCallable)
    void StopChasing();
    
    UFUNCTION(BlueprintCallable)
    void StartChasing();
    
    UFUNCTION(BlueprintCallable)
    bool IsChasing();
    
};

