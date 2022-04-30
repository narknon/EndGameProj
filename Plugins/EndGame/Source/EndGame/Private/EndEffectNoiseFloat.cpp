#include "EndEffectNoiseFloat.h"

UEndEffectNoiseFloat::UEndEffectNoiseFloat() {
    this->m_InterpolateKind = EEndEffectInterpolateKind::Linear;
    this->m_RandomSeed = 0;
}

