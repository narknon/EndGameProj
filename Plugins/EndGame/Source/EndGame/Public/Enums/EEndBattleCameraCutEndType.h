#pragma once
#include "CoreMinimal.h"
#include "EEndBattleCameraCutEndType.generated.h"

UENUM()
namespace EEndBattleCameraCutEndType {
    enum Type {
        None,
        Continue,
        Loop,
        MAX,
    };
}

