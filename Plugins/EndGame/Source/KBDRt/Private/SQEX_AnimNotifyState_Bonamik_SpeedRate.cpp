#include "SQEX_AnimNotifyState_Bonamik_SpeedRate.h"

USQEX_AnimNotifyState_Bonamik_SpeedRate::USQEX_AnimNotifyState_Bonamik_SpeedRate() {
    this->m_BeginSpeedRate = 1;
    this->m_BeginBlendTime = 1;
    this->m_RestoreOriginalSpeedRate = true;
    this->m_EndSpeedRate = 1;
    this->m_EndBlendTime = 1;
    this->m_ApplyToChildren = true;
}

