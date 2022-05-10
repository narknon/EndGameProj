#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_AlterBodyParamTarget.generated.h"

UENUM(BlueprintType)
enum class ESQEX_Bonamik_AlterBodyParamTarget : uint8 {
    ESQEX_Bonamik_AlterBodyParamTarget_Mass,
    ESQEX_Bonamik_AlterBodyParamTarget_Damping = 0x2,
    ESQEX_Bonamik_AlterBodyParamTarget_Friction = 0x1,
    ESQEX_Bonamik_AlterBodyParamTarget_Bounciness = 0x3,
    Num,
    ESQEX_Bonamik_MAX UMETA(Hidden),
};

