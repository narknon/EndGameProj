#include "SQEX_BonamikWindDesc.h"

USQEX_BonamikWindDesc::USQEX_BonamikWindDesc() {
    this->m_WindType = ESQEX_Bonamik_WindType_Directional;
    this->m_RandomTime = 1;
    this->m_WaveTime = 1;
    this->m_CustomWaveTime = 1;
    this->m_PointStrength = 1;
    this->m_BlastRange = 1;
    this->m_BlastSpeed = 1;
    this->m_PointRadius = 1;
    this->m_PeakInRange = 1;
    this->m_StartFrame = 0;
    this->m_LoopNum = 0;
}

