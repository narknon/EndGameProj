#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_ScaleBodyParamTarget.h"
#include "SQEX_Bonamik_ScaleBodyParameter.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_Bonamik_ScaleBodyParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESQEX_Bonamik_ScaleBodyParamTarget m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Magnification;
    
    KBDRT_API FSQEX_Bonamik_ScaleBodyParameter();
};

