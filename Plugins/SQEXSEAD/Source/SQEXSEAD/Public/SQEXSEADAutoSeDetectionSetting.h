#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeDetectorSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SQEXSEADAutoSeDetectionSetting.generated.h"

UCLASS(Blueprintable)
class SQEXSEAD_API USQEXSEADAutoSeDetectionSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADAutoSeDetectorSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADAutoSeDetectorSettings SettingsForMOMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAnalyzerSettingForMotionOnlyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDistanceClippingEnable;
    
    UPROPERTY(EditAnywhere)
    float ClippingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollowMeshVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDetectListenerTeleportRuntime;
    
    USQEXSEADAutoSeDetectionSetting();
};

