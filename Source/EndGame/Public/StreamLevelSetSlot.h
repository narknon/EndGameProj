#pragma once
#include "CoreMinimal.h"
#include "StreamLevelSetSlot.generated.h"

UENUM()
enum class StreamLevelSetSlot : uint8 {
    StreamLevelSet_NONE,
    StreamLevelSet_SLOT1,
    StreamLevelSet_MateriaResource,
    StreamLevelSet_SLOT3,
    StreamLevelSet_Environment,
    StreamLevelSet_Environment_Menu,
    StreamLevelSet_SLOT6,
    StreamLevelSet_SLOT7,
    StreamLevelSet_SLOT8,
    StreamLevelSet_MAX UMETA(Hidden),
};

