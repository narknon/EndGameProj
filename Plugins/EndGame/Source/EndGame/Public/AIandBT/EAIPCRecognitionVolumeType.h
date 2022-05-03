#pragma once
#include "CoreMinimal.h"
#include "EAIPCRecognitionVolumeType.generated.h"

UENUM(Blueprintable)
enum class EAIPCRecognitionVolumeType : uint8 {
    eCombatZone,
    eInaccessibleZone,
    eStaticDangerWarning,
};

