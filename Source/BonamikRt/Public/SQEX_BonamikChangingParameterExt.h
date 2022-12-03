#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikChangingParameter.h"
#include "SQEX_BonamikChangingParameterExt.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikChangingParameterExt : public FSQEX_BonamikChangingParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ValueExt;
    
    BONAMIKRT_API FSQEX_BonamikChangingParameterExt();
};

