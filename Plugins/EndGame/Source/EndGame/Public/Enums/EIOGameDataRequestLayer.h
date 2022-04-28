#pragma once
#include "CoreMinimal.h"
#include "EIOGameDataRequestLayer.generated.h"

UENUM()
enum class EIOGameDataRequestLayer : uint8 {
    None,
    Background,
    Field,
    Menu,
    Count,
};

