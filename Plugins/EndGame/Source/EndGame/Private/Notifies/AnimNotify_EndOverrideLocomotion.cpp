#include "AnimNotify_EndOverrideLocomotion.h"

UAnimNotify_EndOverrideLocomotion::UAnimNotify_EndOverrideLocomotion() {
    this->TargetAnim = EEndLocomotionAnim::IdleLoop;
    this->OverrideIntervalMin = 1;
}

