#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADAutoSeComponentAssetTablePerSurface.generated.h"

UENUM()
namespace ESQEXSEADAutoSeComponentAssetTablePerSurface {
    enum Type {
        Walk,
        Run,
        Jump,
        LandNormal,
        LandHard,
        FootShuffle,
        MAX,
    };
}

