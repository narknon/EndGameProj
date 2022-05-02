#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCondorFortCommonParameter.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCondorFortCommonParameter : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamString;
    
    UPROPERTY(EditAnywhere)
    float ParamFloat;
    
    FEndDataTableCondorFortCommonParameter();
};

