#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeDetectorSettingFootStep.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeDetectorSettingFootStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFootStepWalkRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFootStepParameters;
    
    UPROPERTY(EditAnywhere)
    float FootStepWalkVolumeRangeMin;
    
    UPROPERTY(EditAnywhere)
    float FootStepWalkVolumeRangeMax;
    
    UPROPERTY(EditAnywhere)
    float FootStepRunVolumeRangeMin;
    
    UPROPERTY(EditAnywhere)
    float FootStepRunVolumeRangeMax;
    
    UPROPERTY(EditAnywhere)
    float FootStepKEnergyVolumeRangeMin;
    
    UPROPERTY(EditAnywhere)
    float FootStepKEnergyVolumeRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFootShuffle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFootShuffleParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFootShuffleLessMove;
    
    UPROPERTY(EditAnywhere)
    float FootShuffleAssumeBodyStopVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float FootShuffleDetectFootVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float FootShuffleVolumeRangeMin;
    
    UPROPERTY(EditAnywhere)
    float FootShuffleVolumeRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFootShuffleInMotion;
    
    UPROPERTY(EditAnywhere)
    float FootShuffleInMotionFootAccelThreshold;
    
    UPROPERTY(EditAnywhere)
    float FootShuffleInMotionVolumeRangeMin;
    
    UPROPERTY(EditAnywhere)
    float FootShuffleInMotionVolumeRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFootShuffleTurn;
    
    UPROPERTY(EditAnywhere)
    float FootShuffleTurnMoveDirRotVelocityRateThreshold;
    
    UPROPERTY(EditAnywhere)
    float FootShuffleTurnFootVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float FootShuffleTurnVolumeRangeMin;
    
    UPROPERTY(EditAnywhere)
    float FootShuffleTurnVolumeRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideLandNormalParameters;
    
    UPROPERTY(EditAnywhere)
    float LandNormalAssumeFlyTime;
    
    UPROPERTY(EditAnywhere)
    float LandNormalEnoughVelocity;
    
    UPROPERTY(EditAnywhere)
    float LandNormalVolumeRangeMin;
    
    UPROPERTY(EditAnywhere)
    float LandNormalVolumeRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLandHard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideLandHardParameters;
    
    UPROPERTY(EditAnywhere)
    float LandHardAssumeFlyTime;
    
    UPROPERTY(EditAnywhere)
    float LandHardEnoughVelocity;
    
    UPROPERTY(EditAnywhere)
    float LandHardVolumeRangeMin;
    
    UPROPERTY(EditAnywhere)
    float LandHardVolumeRangeMax;
    
    FSQEXSEADAutoSeDetectorSettingFootStep();
};

