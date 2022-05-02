#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBikeCommonParameter.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBikeCommonParameter : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParamInt;
    
    UPROPERTY(EditAnywhere)
    float ParamFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParamString;
    
    FEndDataTableBikeCommonParameter();
};

