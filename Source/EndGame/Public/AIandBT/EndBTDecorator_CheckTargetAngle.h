#pragma once
#include "CoreMinimal.h"
#include "EAngleCheckType.h"
#include "EndBTDecorator_CheckConditionBase.h"
#include "EEndAiMathCmp.h"
#include "EndBTDecorator_CheckTargetAngle.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_CheckTargetAngle : public UEndBTDecorator_CheckConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAngleCheckType CheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndAiMathCmp Operator;
    
    UPROPERTY(EditAnywhere)
    float CheckTargetAngle;
    
    UEndBTDecorator_CheckTargetAngle();
};

