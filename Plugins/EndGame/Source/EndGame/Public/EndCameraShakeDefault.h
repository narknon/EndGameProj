#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShake -FallbackName=CameraShake
#include "EndCameraShakeDefault.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndCameraShakeDefault : public UCameraShake {
    GENERATED_BODY()
public:
    UEndCameraShakeDefault();
};

