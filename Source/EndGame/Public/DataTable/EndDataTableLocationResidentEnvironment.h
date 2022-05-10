#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableLocationResidentEnvironment.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableLocationResidentEnvironment : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float PlayerLocX;
    
    UPROPERTY(EditAnywhere)
    float PlayerLocY;
    
    UPROPERTY(EditAnywhere)
    float PlayerLocZ;
    
    UPROPERTY(EditAnywhere)
    float PlayerYaw;
    
    FEndDataTableLocationResidentEnvironment();
};

