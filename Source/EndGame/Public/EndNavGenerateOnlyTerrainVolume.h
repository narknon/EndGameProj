#pragma once
#include "CoreMinimal.h"
#include "EndNavSimpleTerrainVolume.h"
#include "EndNavGenerateOnlyTerrainVolume.generated.h"

UCLASS(Blueprintable)
class AEndNavGenerateOnlyTerrainVolume : public AEndNavSimpleTerrainVolume {
    GENERATED_BODY()
public:
    AEndNavGenerateOnlyTerrainVolume();
};

