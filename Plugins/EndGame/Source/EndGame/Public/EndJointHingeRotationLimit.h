#pragma once
#include "CoreMinimal.h"
#include "EEndJointLimitAxis.h"
#include "EndJointHingeRotationLimit.generated.h"

USTRUCT(BlueprintType)
struct FEndJointHingeRotationLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndJointLimitAxis Axis;
    
    UPROPERTY(EditAnywhere)
    float Min;
    
    UPROPERTY(EditAnywhere)
    float Max;
    
    ENDGAME_API FEndJointHingeRotationLimit();
};

