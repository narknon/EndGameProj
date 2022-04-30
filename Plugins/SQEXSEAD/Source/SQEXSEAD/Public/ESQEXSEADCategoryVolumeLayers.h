#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADCategoryVolumeLayers.generated.h"

UENUM()
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

