#include "VfxNonUniformRandom.h"

FVfxNonUniformRandom::FVfxNonUniformRandom() {
    this->m_Kind = EVfxNonUniformKind::None;
    this->m_Param = 1;
    this->m_bReverse = false;
}

