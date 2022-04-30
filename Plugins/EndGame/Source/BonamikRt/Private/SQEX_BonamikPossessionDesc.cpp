#include "SQEX_BonamikPossessionDesc.h"

FSQEX_BonamikPossessionDesc::FSQEX_BonamikPossessionDesc() {
    this->m_BodyId = 0;
    this->m_Time = 1;
    this->m_Mode = ESQEX_Bonamik_PSSMODE_SWING_Y;
    this->m_SubMode = 0;
    this->m_IsFlow = false;
    this->m_DrawingRadius = 1;
    this->m_TimeToActivateNext = 1;
    this->m_Magnitude = 1;
    this->m_IncrementalMagnitude = 1;
    this->m_MaxMagnitude = 1;
    this->m_DelayTime = 1;
}

