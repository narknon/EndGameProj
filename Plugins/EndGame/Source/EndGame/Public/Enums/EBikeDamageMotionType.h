#pragma once
#include "CoreMinimal.h"
#include "EBikeDamageMotionType.generated.h"

UENUM()
enum class EBikeDamageMotionType {
    Normal,
    Explosion,
    KnockBack_LR1,
    KnockBack_F,
    KnockBack_LR2,
};

