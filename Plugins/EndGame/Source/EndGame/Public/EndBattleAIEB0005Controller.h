#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "ERideMode.h"
#include "EndBattleAIEB0005Controller.generated.h"

class AEndCharacter;

UCLASS(Blueprintable)
class AEndBattleAIEB0005Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float FastMoveSpeed;
    
    UPROPERTY(EditAnywhere)
    float FastMoveRange;
    
    UPROPERTY(EditAnywhere)
    float FastBeginToLoopBlendTime;
    
    UPROPERTY(EditAnywhere)
    float FastLoopToEndBlendTime;
    
    UPROPERTY(EditAnywhere)
    float FastNextBlendTime;
    
public:
    AEndBattleAIEB0005Controller();
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeRideMode(ERideMode rideMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void BlowSunglass(AEndCharacter* damageCauserChara);
    
};

