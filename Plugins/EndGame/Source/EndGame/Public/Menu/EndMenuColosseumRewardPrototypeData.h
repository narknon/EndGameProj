#pragma once
#include "CoreMinimal.h"
#include "EndMenuColosseumRewardPrototypeData.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndMenuColosseumRewardPrototypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemCount;
    
    FEndMenuColosseumRewardPrototypeData();
};

