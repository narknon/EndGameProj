#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeDetectorSettingMisc.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeDetectorSettingMisc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTurnDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideTurnSettings;
    
    UPROPERTY(EditAnywhere)
    float TurnRotVelocityRateThreshold;
    
    UPROPERTY(EditAnywhere)
    float TurnVolumeMinRotVelRate;
    
    UPROPERTY(EditAnywhere)
    float TurnVolumeMaxRotVelRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHeadRotDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideHeadRotSettings;
    
    UPROPERTY(EditAnywhere)
    float HeadRotRVelThreshold;
    
    UPROPERTY(EditAnywhere)
    float HeadRotVolumeMinRVel;
    
    UPROPERTY(EditAnywhere)
    float HeadRotVolumeMaxRVel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableBowDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideBowSettings;
    
    UPROPERTY(EditAnywhere)
    float AssumeWaistLessMoveVelocity;
    
    UPROPERTY(EditAnywhere)
    float ShoulderRVelThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseShouldersRVelAverage;
    
    UPROPERTY(EditAnywhere)
    float BowVolumeMinRVel;
    
    UPROPERTY(EditAnywhere)
    float BowVolumeMaxRVel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRagdollDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideRagdollSettings;
    
    UPROPERTY(EditAnywhere)
    float RagdollBounceEnoughVel;
    
    UPROPERTY(EditAnywhere)
    float RagdollBounceVolumeMinVel;
    
    UPROPERTY(EditAnywhere)
    float RagdollBounceVolumeMaxVel;
    
    UPROPERTY(EditAnywhere)
    float RagdollFricativeVelThreshold;
    
    UPROPERTY(EditAnywhere)
    float RagdollFricativeVolumeMinVel;
    
    UPROPERTY(EditAnywhere)
    float RagdollFricativeVolumeMaxVel;
    
    FSQEXSEADAutoSeDetectorSettingMisc();
};

