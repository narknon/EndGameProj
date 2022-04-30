#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EndBattleAIEB0011Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEB0011Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    AEndBattleAIEB0011Controller();
    UFUNCTION(BlueprintCallable)
    void SuspendReserveActionRush();
    
    UFUNCTION(BlueprintCallable)
    void RequestReserveActionRush();
    
};

