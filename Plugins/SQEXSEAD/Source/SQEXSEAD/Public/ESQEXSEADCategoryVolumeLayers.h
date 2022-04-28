#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADCategoryVolumeLayers.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADCategoryVolumeLayers {
    enum Type {
        Debug,
        Game,
        Config,
        Movie,
        Level,
        Cut,
        _MAX UMETA(Hidden),
    };
}

