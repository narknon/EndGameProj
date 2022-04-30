#pragma once
#include "CoreMinimal.h"
#include "EndBTDecorator_CheckConditionBase.h"
#include "EEndFieldCameraOperatorFlavorType.h"
#include "EndBTDecorator_Field_IsCameraFlavor.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_Field_IsCameraFlavor : public UEndBTDecorator_CheckConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndFieldCameraOperatorFlavorType m_CameraFlavorType;
    
    UEndBTDecorator_Field_IsCameraFlavor();
};

