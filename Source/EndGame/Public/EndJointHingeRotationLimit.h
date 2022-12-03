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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    ENDGAME_API FEndJointHingeRotationLimit();
};

