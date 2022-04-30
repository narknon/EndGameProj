#pragma once
#include "CoreMinimal.h"
#include "eCharacterType.generated.h"

UENUM()
enum eCharacterType {
    kBiped,
    kQuadruped,
    kSnake,
    kUnstructured,
    kUnset,
};

