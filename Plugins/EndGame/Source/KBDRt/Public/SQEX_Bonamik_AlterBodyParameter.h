#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_AlterBodyParamTarget.h"
#include "SQEX_Bonamik_AlterBodyParameter.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_Bonamik_AlterBodyParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESQEX_Bonamik_AlterBodyParamTarget m_Target;
    
    UPROPERTY(EditAnywhere)
    float m_Value;
    
    KBDRT_API FSQEX_Bonamik_AlterBodyParameter();
};

