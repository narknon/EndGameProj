#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EndBattleAIEB0009Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEB0009Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    AEndBattleAIEB0009Controller();
private:
    UFUNCTION(BlueprintCallable)
    void AddDisableRangePartsBarrier(float baseAngle, float rangeAngle);
    
};

