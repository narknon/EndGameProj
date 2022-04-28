#pragma once
#include "CoreMinimal.h"
#include "ETargetChoosingTag.generated.h"

UENUM()
enum class ETargetChoosingTag : uint8 {
    eSameAsLeader,
    eCurrentOne,
    eWallClimber,
    eOneWhoTargetLeader,
    eOneWhoTargetMe,
    eWhoInBurst,
    eHasLowestHP,
    eAssignedTarget,
    eUnassignedTarget,
};

