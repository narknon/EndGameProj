#include "AnimNotify_EndEmissiveAnimation.h"

UAnimNotify_EndEmissiveAnimation::UAnimNotify_EndEmissiveAnimation() {
    this->Modifier = EEndEmissiveModifierType::Overlay;
    this->Curve = EEndEmissiveCurveType::Curve01;
    this->Duration = 1.00f;
    this->BlendInTime = 0.20f;
    this->BlendOutTime = 0.20f;
    this->StartOffset = 0.00f;
    this->EndOffset = 0.00f;
}

