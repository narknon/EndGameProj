#pragma once
#include "CoreMinimal.h"
#include "EEndPointOrder.h"
#include "EndDuctSplineLinkInfo.generated.h"

USTRUCT(BlueprintType)
struct FEndDuctSplineLinkInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int8 Index;
    
    UPROPERTY(EditAnywhere)
    EEndPointOrder Order;
    
    ENDGAME_API FEndDuctSplineLinkInfo();
};

