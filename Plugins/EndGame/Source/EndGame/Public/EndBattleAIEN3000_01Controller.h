#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EndBattleAIEN3000_01Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEN3000_01Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MaxRange;
    
    UPROPERTY(EditAnywhere)
    float MinRange;
    
    UPROPERTY(EditAnywhere)
    float HoamingQuantity;
    
    UPROPERTY(EditAnywhere)
    float HoamingTime;
    
public:
    AEndBattleAIEN3000_01Controller();
};

