#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_Parameters.h"
#include "SQEX_BonamikChangingParameter.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikChangingParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_Groups;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_Parameters> m_Parameter;
    
    UPROPERTY(EditAnywhere)
    float m_Value;
    
    BONAMIKRT_API FSQEX_BonamikChangingParameter();
};

