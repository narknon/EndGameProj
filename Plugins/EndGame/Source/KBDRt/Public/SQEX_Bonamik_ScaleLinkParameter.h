#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_ScaleLinkParamTarget.h"
#include "SQEX_Bonamik_ScaleLinkParameter.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_Bonamik_ScaleLinkParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESQEX_Bonamik_ScaleLinkParamTarget m_Target;
    
    UPROPERTY(EditAnywhere)
    float m_Magnification;
    
    KBDRT_API FSQEX_Bonamik_ScaleLinkParameter();
};

