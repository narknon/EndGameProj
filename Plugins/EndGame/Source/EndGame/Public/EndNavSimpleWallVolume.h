#pragma once
#include "CoreMinimal.h"
#include "EndNavBlockingModifierVolume.h"
#include "EndNavSimpleWallVolume.generated.h"

UCLASS(Blueprintable)
class AEndNavSimpleWallVolume : public AEndNavBlockingModifierVolume {
    GENERATED_BODY()
public:
    AEndNavSimpleWallVolume(const FObjectInitializer& ObjectInitializer);
};

