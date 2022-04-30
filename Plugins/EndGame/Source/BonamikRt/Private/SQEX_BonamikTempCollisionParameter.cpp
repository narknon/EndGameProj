#include "SQEX_BonamikTempCollisionParameter.h"

FSQEX_BonamikTempCollisionParameter::FSQEX_BonamikTempCollisionParameter() {
    this->m_ShapeType = ESQEX_BonamikTempCollisionShape::None;
    this->m_ShapeParam0 = 1;
    this->m_FixedWorldPosition = false;
    this->m_FixedWorldRotation = false;
}

