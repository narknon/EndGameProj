#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EndBikeSplineJumpAreaData.generated.h"

USTRUCT(BlueprintType)
struct FEndBikeSplineJumpAreaData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float JumpPointInputKey;
    
    UPROPERTY(EditAnywhere)
    float JumpBoardLength;
    
    UPROPERTY(EditAnywhere)
    float JumpBoardHeight;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval JumpBoardWidth;
    
    ENDGAME_API FEndBikeSplineJumpAreaData();
};

