#include "AnimNotify_EndEmissiveAnimation.h"

UAnimNotify_EndEmissiveAnimation::UAnimNotify_EndEmissiveAnimation() {
    this->Modifier = EEndEmissiveModifierType::Overlay;
    this->Curve = EEndEmissiveCurveType::Curve00;
    this->Duration = 1;
    this->BlendInTime = 1;
    this->BlendOutTime = 1;
    this->StartOffset = 1;
    this->EndOffset = 1;
}

