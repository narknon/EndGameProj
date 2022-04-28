#pragma once
#include "CoreMinimal.h"
#include "EArmPhase.generated.h"

UENUM()
enum class EArmPhase : uint8 {
    eIdle,
    eAroundIdle,
    eSideAttack1,
    eSideAttack2,
    eAroundAttack,
    eTwin,
    eEjectMove,
    eDockingMove,
    eRocketPunch,
    eCatch,
    eThrow,
    ePoint,
    eFreeze,
};

