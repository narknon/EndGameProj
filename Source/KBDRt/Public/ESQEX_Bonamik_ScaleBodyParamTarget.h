#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_ScaleBodyParamTarget.generated.h"

UENUM(BlueprintType)
enum class ESQEX_Bonamik_ScaleBodyParamTarget : uint8 {
    ESQEX_Bonamik_ScaleBodyParamTarget_Mass,
    ESQEX_Bonamik_ScaleBodyParamTarget_Damping = 0x2,
    ESQEX_Bonamik_ScaleBodyParamTarget_Friction = 0x1,
    ESQEX_Bonamik_ScaleBodyParamTarget_Bounciness = 0x3,
    ESQEX_Bonamik_ScaleBodyParamTarget_ShapeSize = 0x11,
    Num,
    ESQEX_Bonamik_MAX UMETA(Hidden),
};

