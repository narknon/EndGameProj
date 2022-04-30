#pragma once
#include "CoreMinimal.h"
#include "MonkeyBarLinkPoint.h"
#include "MonkeyBarPointGathering.generated.h"

USTRUCT(BlueprintType)
struct FMonkeyBarPointGathering {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMonkeyBarLinkPoint> LinkPointList;
    
    ENDGAME_API FMonkeyBarPointGathering();
};

