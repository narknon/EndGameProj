#pragma once
#include "CoreMinimal.h"
#include "EAIPCRecognitionVolumeType.generated.h"

UENUM(BlueprintType)
enum class EAIPCRecognitionVolumeType : uint8 {
    eCombatZone,
    eInaccessibleZone,
    eStaticDangerWarning,
};

