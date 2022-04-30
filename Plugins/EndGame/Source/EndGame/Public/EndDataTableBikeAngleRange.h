#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBikeAngleRange.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBikeAngleRange : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AngleA;
    
    UPROPERTY(EditAnywhere)
    float AngleB;
    
    FEndDataTableBikeAngleRange();
};

