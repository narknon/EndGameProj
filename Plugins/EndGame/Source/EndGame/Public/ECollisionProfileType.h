#pragma once
#include "CoreMinimal.h"
#include "ECollisionProfileType.generated.h"

UENUM()
enum class ECollisionProfileType : uint8 {
    Wall,
    Pc_Wall,
    Party_Wall,
    Enemy_Wall,
    NoCollision,
};

