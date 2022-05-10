#pragma once
#include "CoreMinimal.h"
#include "EEndCutWrapperType.generated.h"

UENUM()
namespace EEndCutWrapperType {
    enum Type {
        Event,
        Live,
        Movie,
        Field,
    };
}

