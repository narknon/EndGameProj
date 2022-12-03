#include "AnimNotify_EndEmissiveAnimationRange.h"

UAnimNotify_EndEmissiveAnimationRange::UAnimNotify_EndEmissiveAnimationRange() {
    this->Modifier = EEndEmissiveModifierType::Overlay;
    this->Curve = EEndEmissiveCurveType::Curve01;
    this->Duration = 1.00f;
    this->BlendInTime = 0.20f;
    this->BlendOutTime = 0.20f;
    this->bCallStopOnEnd = true;
}

