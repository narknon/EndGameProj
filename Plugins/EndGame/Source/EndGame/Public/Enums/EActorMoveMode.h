#pragma once
#include "CoreMinimal.h"
#include "EActorMoveMode.generated.h"

UENUM()
enum class EActorMoveMode {
    Ground,
    Fly,
    Other,
    None,
};

