#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_ScaleLinkParamTarget.generated.h"

UENUM(BlueprintType)
enum class ESQEX_Bonamik_ScaleLinkParamTarget : uint8 {
    ESQEX_Bonamik_ScaleLinkParamTarget_Strength = 0xD,
    ESQEX_Bonamik_ScaleLinkParamTarget_ConeLimit,
    ESQEX_Bonamik_ScaleLinkParamTarget_ConeOffset,
    ESQEX_Bonamik_ScaleLinkParamTarget_ConeLimitOffset,
    ESQEX_Bonamik_ScaleLinkParamTarget_InnerConeStr = 0xB,
    ESQEX_Bonamik_ScaleLinkParamTarget_OuterConeStr,
    Num,
    ESQEX_Bonamik_MAX = 0x11,
};

