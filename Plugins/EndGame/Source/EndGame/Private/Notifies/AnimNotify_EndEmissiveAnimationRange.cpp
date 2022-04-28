#include "AnimNotify_EndEmissiveAnimationRange.h"

UAnimNotify_EndEmissiveAnimationRange::UAnimNotify_EndEmissiveAnimationRange() {
    this->Modifier = EEndEmissiveModifierType::Overlay;
    this->Curve = EEndEmissiveCurveType::Curve00;
    this->Duration = 1;
    this->BlendInTime = 1;
    this->BlendOutTime = 1;
    this->bCallStopOnEnd = true;
}

