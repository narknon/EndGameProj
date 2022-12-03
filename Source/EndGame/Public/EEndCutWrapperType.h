#pragma once
#include "CoreMinimal.h"
#include "EEndCutWrapperType.generated.h"

UENUM(BlueprintType)
namespace EEndCutWrapperType {
    enum Type {
        Event,
        Live,
        Movie,
        Field,
    };
}

