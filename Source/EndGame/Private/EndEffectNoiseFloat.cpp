#include "EndEffectNoiseFloat.h"

UEndEffectNoiseFloat::UEndEffectNoiseFloat() {
    this->m_InterpolateKind = EEndEffectInterpolateKind::EaseInOut;
    this->m_RandomSeed = 0;
}

