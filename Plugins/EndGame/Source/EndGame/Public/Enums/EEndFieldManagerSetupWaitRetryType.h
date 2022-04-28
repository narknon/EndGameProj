#pragma once
#include "CoreMinimal.h"
#include "EEndFieldManagerSetupWaitRetryType.generated.h"

UENUM()
enum class EEndFieldManagerSetupWaitRetryType {
    None,
    WaitCharaAttach,
    WaitTextureStreaming,
    WaitCharaPopUpdateTickLOD,
    WaitCharaPopStableTimer,
};

