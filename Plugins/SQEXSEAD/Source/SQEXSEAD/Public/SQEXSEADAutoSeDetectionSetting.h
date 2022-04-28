#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAnimNotifyState_ChangeAutoSeEnable.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADAutoSeDetectionSetting.generated.h"

UCLASS(BlueprintType)
class SQEXSEAD_API USQEXSEADAutoSeDetectionSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSQEXSEADAutoSeDetectorSettings Settings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSQEXSEADAutoSeDetectorSettings SettingsForMOMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseAnalyzerSettingForMotionOnlyMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDistanceClippingEnable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClippingDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFollowMeshVisibility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bForceDetectListenerTeleportRuntime;
    
    USQEXSEADAutoSeDetectionSetting();
};

