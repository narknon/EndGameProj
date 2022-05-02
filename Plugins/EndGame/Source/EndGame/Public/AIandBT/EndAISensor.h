#pragma once
#include "CoreMinimal.h"
#include "EndAISensor.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAISensor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdatableWhenAIStop;
    
    FEndAISensor();
};

