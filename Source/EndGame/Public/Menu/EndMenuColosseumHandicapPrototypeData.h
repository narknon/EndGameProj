#pragma once
#include "CoreMinimal.h"
#include "EEndMenuColosseumHandicapCategoryPrototype.h"
#include "EndMenuColosseumHandicapPrototypeData.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndMenuColosseumHandicapPrototypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndMenuColosseumHandicapCategoryPrototype Category;
    
    FEndMenuColosseumHandicapPrototypeData();
};

