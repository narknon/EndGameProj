#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeDetectorSettingSwing.h"
#include "SQEXSEADAutoSeDetectorSettingRustle.h"
#include "SQEXSEADAutoSeAnalyzerSetting.h"
#include "SQEXSEADAutoSeDetectorSettingFootStep.h"
#include "SQEXSEADAutoSeDetectorSettingWingAction.h"
#include "SQEXSEADAutoSeDetectorSettingMisc.h"
#include "SQEXSEADAutoSePostDetectionSettings.h"
#include "SQEXSEADAutoSeDetectorSettings.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeDetectorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADAutoSeAnalyzerSetting AnalyzerSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADAutoSeDetectorSettingFootStep DetectorSettingFootStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADAutoSeDetectorSettingRustle DetectorSettingRustle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADAutoSeDetectorSettingWingAction DetectorSettingWingAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADAutoSeDetectorSettingSwing DetectorSettingSwing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADAutoSeDetectorSettingMisc DetectorSettingMisc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADAutoSePostDetectionSettings PostDetectionSettings;
    
    FSQEXSEADAutoSeDetectorSettings();
};

