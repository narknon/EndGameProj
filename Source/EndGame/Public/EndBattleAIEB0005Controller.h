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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastMoveRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastBeginToLoopBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastLoopToEndBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

