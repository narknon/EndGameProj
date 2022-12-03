#pragma once
#include "CoreMinimal.h"
#include "EndBTDecorator_CheckConditionBase.h"
#include "ETargetType.h"
#include "EndBTDecorator_AIPCCheckTargetAngle.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_AIPCCheckTargetAngle : public UEndBTDecorator_CheckConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETargetType targetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecifiedAngle;
    
    UEndBTDecorator_AIPCCheckTargetAngle();
};

