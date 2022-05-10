#pragma once
#include "CoreMinimal.h"
#include "EndNavModifierVolumeBase.h"
#include "EndNavModifierFlatlandsVolume.generated.h"

UCLASS(Blueprintable)
class AEndNavModifierFlatlandsVolume : public AEndNavModifierVolumeBase {
    GENERATED_BODY()
public:
    AEndNavModifierFlatlandsVolume(const FObjectInitializer& ObjectInitializer);
};

