#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_AlterLinkParamTarget.h"
#include "SQEX_Bonamik_AlterLinkParameter.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_Bonamik_AlterLinkParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESQEX_Bonamik_AlterLinkParamTarget m_Target;
    
    UPROPERTY(EditAnywhere)
    float m_ValueA;
    
    UPROPERTY(EditAnywhere)
    float m_ValueB;
    
    KBDRT_API FSQEX_Bonamik_AlterLinkParameter();
};

