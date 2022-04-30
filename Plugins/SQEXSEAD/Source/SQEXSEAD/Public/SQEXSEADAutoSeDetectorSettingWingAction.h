#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeDetectorSettingWingAction.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeDetectorSettingWingAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFlapUpDownParameters;
    
    UPROPERTY(EditAnywhere)
    float FlapUpVolumeRangeMin;
    
    UPROPERTY(EditAnywhere)
    float FlapUpVolumeRangeMax;
    
    UPROPERTY(EditAnywhere)
    float FlapDownVolumeRangeMin;
    
    UPROPERTY(EditAnywhere)
    float FlapDownVolumeRangeMax;
    
    FSQEXSEADAutoSeDetectorSettingWingAction();
};

