#include "EndEffectNoiseVector.h"

UEndEffectNoiseVector::UEndEffectNoiseVector() {
    this->m_InterpolateKind = EEndEffectInterpolateKind::Linear;
    this->m_RandomSeed = 0;
}

