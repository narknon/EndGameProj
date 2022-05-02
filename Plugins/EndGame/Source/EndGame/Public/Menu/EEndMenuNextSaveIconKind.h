#pragma once
#include "CoreMinimal.h"
#include "EEndMenuNextSaveIconKind.generated.h"

UENUM()
enum class EEndMenuNextSaveIconKind {
    None,
    CheckpointUpdated,
    FailedToSave,
    FailedToLoad,
};

