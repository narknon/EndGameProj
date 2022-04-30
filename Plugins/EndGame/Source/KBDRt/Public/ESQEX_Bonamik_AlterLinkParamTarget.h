#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_AlterLinkParamTarget.generated.h"

UENUM(BlueprintType)
enum class ESQEX_Bonamik_AlterLinkParamTarget : uint8 {
    ESQEX_Bonamik_AlterLinkParamTarget_Strength = 0xD,
    ESQEX_Bonamik_AlterLinkParamTarget_ConeLimit,
    ESQEX_Bonamik_AlterLinkParamTarget_ConeOffset,
    ESQEX_Bonamik_AlterLinkParamTarget_ConeLimitOffset,
    ESQEX_Bonamik_AlterLinkParamTarget_InnerConeStr = 0xB,
    ESQEX_Bonamik_AlterLinkParamTarget_OuterConeStr,
    Num,
    ESQEX_Bonamik_MAX = 0x11,
};

