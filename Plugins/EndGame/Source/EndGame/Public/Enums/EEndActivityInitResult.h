#pragma once
#include "CoreMinimal.h"
#include "EEndActivityInitResult.generated.h"

UENUM()
enum class EEndActivityInitResult : uint8 {
    None,
    Title,
    NewGame,
    LoadGame,
};

