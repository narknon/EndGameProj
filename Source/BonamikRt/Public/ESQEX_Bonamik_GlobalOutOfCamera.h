#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_GlobalOutOfCamera.generated.h"

UENUM()
enum class ESQEX_Bonamik_GlobalOutOfCamera : uint8 {
    Default,
    Override,
    ESQEX_Bonamik_MAX UMETA(Hidden),
};

