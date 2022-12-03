#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCondorFortUnitFormation.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCondorFortUnitFormation : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> OffsetForward_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> OffsetRight_Array;
    
    FEndDataTableCondorFortUnitFormation();
};

