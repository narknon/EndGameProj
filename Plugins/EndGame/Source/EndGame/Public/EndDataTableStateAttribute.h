#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableStateAttribute.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableStateAttribute : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttributeIndex;
    
    FEndDataTableStateAttribute();
};

