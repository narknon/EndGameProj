#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EndBikeSplineJumpAreaData.generated.h"

USTRUCT(BlueprintType)
struct FEndBikeSplineJumpAreaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpPointInputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpBoardLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpBoardHeight;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval JumpBoardWidth;
    
    ENDGAME_API FEndBikeSplineJumpAreaData();
};

