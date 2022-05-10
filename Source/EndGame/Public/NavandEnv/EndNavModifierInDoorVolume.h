#pragma once
#include "CoreMinimal.h"
#include "EndNavModifierVolumeBase.h"
#include "EEndFieldCameraInDoorPriorityType.h"
#include "EEndFieldCameraInDoorType.h"
#include "EEndSpecificMoveType.h"
#include "EEndDashType.h"
#include "EndNavModifierInDoorVolume.generated.h"

UCLASS(Blueprintable)
class AEndNavModifierInDoorVolume : public AEndNavModifierVolumeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndFieldCameraInDoorType CameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideCameraSettingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndFieldCameraInDoorPriorityType OverridePriorityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndSpecificMoveType SpecificMoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndDashType DashType;
    
    AEndNavModifierInDoorVolume(const FObjectInitializer& ObjectInitializer);
};

