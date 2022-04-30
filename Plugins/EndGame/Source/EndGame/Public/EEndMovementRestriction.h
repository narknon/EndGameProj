#pragma once
#include "CoreMinimal.h"
#include "EEndMovementRestriction.generated.h"

UENUM()
enum class EEndMovementRestriction {
    None,
    WalkOnlyToDestination,
    ForceWalkToDestination,
    ForceWalkToDestinationAtSameSpeed,
    MAX,
};

