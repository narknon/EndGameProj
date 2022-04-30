#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeAnalyzerSetting.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeAnalyzerSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAssumeFootMotionlessMoveLenInWorld;
    
    UPROPERTY(EditAnywhere)
    float AssumeFootMotionlessMoveLenInWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAssumeBodyRunngingVelocity;
    
    UPROPERTY(EditAnywhere)
    float AssumeBodyRunngingVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAutoCalcFootGroundedThresholdRatio;
    
    UPROPERTY(EditAnywhere)
    float AutoCalcFootGroundedThresholdRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoWarpDetectionEnable;
    
    FSQEXSEADAutoSeAnalyzerSetting();
};

