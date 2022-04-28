#pragma once
#include "CoreMinimal.h"
#include "EEndMenuFieldPaneType.generated.h"

UENUM()
enum class EEndMenuFieldPaneType : uint8 {
    Command,
    Status,
    TypeMax,
};

