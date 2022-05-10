#pragma once
#include "CoreMinimal.h"
#include "EndFeelerWallExInstanceContext.generated.h"

USTRUCT(BlueprintType)
struct FEndFeelerWallExInstanceContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceIndex;
    
    ENDGAME_API FEndFeelerWallExInstanceContext();
};

