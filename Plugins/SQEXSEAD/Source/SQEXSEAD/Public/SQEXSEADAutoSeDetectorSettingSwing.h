#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeDetectorSettingSwing.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeDetectorSettingSwing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideKnockParameters;
    
    UPROPERTY(EditAnywhere)
    float KnockDetectVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float KnockVolumeRangeMin;
    
    UPROPERTY(EditAnywhere)
    float KnockVolumeRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideRubParameters;
    
    UPROPERTY(EditAnywhere)
    float RubDetectVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float RubVolumeRangeMin;
    
    UPROPERTY(EditAnywhere)
    float RubVolumeRangeMax;
    
    FSQEXSEADAutoSeDetectorSettingSwing();
};

