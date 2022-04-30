#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeDetectorSettingRustle.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeDetectorSettingRustle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableArmRustleElbow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideArmRustleElbowVolumeRanges;
    
    UPROPERTY(EditAnywhere)
    float ArmRustleElbowRVelThreshold;
    
    UPROPERTY(EditAnywhere)
    float ArmRustleElbowRelativeVelocityVolumeRangeMin;
    
    UPROPERTY(EditAnywhere)
    float ArmRustleElbowRelativeVelocityVolumeRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableArmRustleHandWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideArmRustleHandWaveParameters;
    
    UPROPERTY(EditAnywhere)
    float ArmRustleHandWaveRVelThreshold;
    
    UPROPERTY(EditAnywhere)
    float ArmRustleHandWaveVolumeRangeMin;
    
    UPROPERTY(EditAnywhere)
    float ArmRustleHandWaveVolumeRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFootRustleCrotch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFootRustleCrotchParameters;
    
    UPROPERTY(EditAnywhere)
    float FootRustleCrotchFTRelVelThresholdWalk;
    
    UPROPERTY(EditAnywhere)
    float FootRustleCrotchFTRelVelThresholdRun;
    
    UPROPERTY(EditAnywhere)
    float FootRustleCrotchVolumeRangeMin;
    
    UPROPERTY(EditAnywhere)
    float FootRustleCrotchVolumeRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFootRustle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFootRustleParameters;
    
    UPROPERTY(EditAnywhere)
    float FootRustleRVelThresholdWalk;
    
    UPROPERTY(EditAnywhere)
    float FootRustleRVelThresholdRun;
    
    UPROPERTY(EditAnywhere)
    float FootRustleVolumeRangeMin;
    
    UPROPERTY(EditAnywhere)
    float FootRustleVolumeRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFootRustleBend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFootRustleBendParameters;
    
    UPROPERTY(EditAnywhere)
    float FootRustleBendBendThreshold;
    
    UPROPERTY(EditAnywhere)
    float FootRustleBendStretchThreshold;
    
    UPROPERTY(EditAnywhere)
    float FootRustleBendVolumeRangeMin;
    
    UPROPERTY(EditAnywhere)
    float FootRustleBendVolumeRangeMax;
    
    UPROPERTY(EditAnywhere)
    float DetectionSuppressTimeDefault;
    
    UPROPERTY(EditAnywhere)
    float DetectionSuppressTimeForFast;
    
    FSQEXSEADAutoSeDetectorSettingRustle();
};

