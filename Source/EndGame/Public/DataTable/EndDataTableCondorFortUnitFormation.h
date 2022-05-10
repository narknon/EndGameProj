#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCondorFortUnitFormation.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCondorFortUnitFormation : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<float> OffsetForward_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> OffsetRight_Array;
    
    FEndDataTableCondorFortUnitFormation();
};

