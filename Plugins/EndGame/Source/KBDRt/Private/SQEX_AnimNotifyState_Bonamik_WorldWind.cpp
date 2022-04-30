#include "SQEX_AnimNotifyState_Bonamik_WorldWind.h"

USQEX_AnimNotifyState_Bonamik_WorldWind::USQEX_AnimNotifyState_Bonamik_WorldWind() {
    this->m_WindType = ESQEX_Bonamik_WindType_Notify_Directional;
    this->m_AreaType = ESQEX_Bonamik_WindAreaType_Global;
    this->m_BonamikWindGlobalAddition = true;
    this->m_SphereRadius = 1;
    this->m_AreaMargin = 1;
    this->m_RandomTime = 1;
    this->m_BlastStrength = 1;
    this->m_PeakInRange = 1;
    this->m_BlastRange = 1;
    this->m_BlastSpeed = 1;
    this->m_LoopNum = 0;
    this->m_StartFrame = 0;
}

