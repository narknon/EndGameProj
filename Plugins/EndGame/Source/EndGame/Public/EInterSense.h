#pragma once
#include "CoreMinimal.h"
#include "EInterSense.generated.h"

UENUM()
enum class EInterSense : uint8 {
    Vision,
    Hearing,
    TactileSense,
    MaxSence,
};

