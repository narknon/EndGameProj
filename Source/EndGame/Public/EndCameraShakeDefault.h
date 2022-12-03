#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraShake.h"
#include "EndCameraShakeDefault.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndCameraShakeDefault : public UCameraShake {
    GENERATED_BODY()
public:
    UEndCameraShakeDefault();
};

