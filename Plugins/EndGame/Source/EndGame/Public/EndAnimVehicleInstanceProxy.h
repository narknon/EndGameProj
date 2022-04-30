#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "EndAnimVehicleInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FEndAnimVehicleInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    ENDGAME_API FEndAnimVehicleInstanceProxy();
};

