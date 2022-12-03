#include "EndEffectNoiseVector.h"

UEndEffectNoiseVector::UEndEffectNoiseVector() {
    this->m_InterpolateKind = EEndEffectInterpolateKind::EaseInOut;
    this->m_RandomSeed = 0;
}

