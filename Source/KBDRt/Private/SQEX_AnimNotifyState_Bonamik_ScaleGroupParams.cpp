#include "SQEX_AnimNotifyState_Bonamik_ScaleGroupParams.h"

USQEX_AnimNotifyState_Bonamik_ScaleGroupParams::USQEX_AnimNotifyState_Bonamik_ScaleGroupParams() {
    this->m_ChangeInnerCone = true;
    this->m_InnerConeScale = 1.00f;
    this->m_ChangeOuterCone = true;
    this->m_OuterConeScale = 1.00f;
    this->m_ChangeLocalForce = true;
    this->m_LocalForceScale = 1.00f;
    this->m_ChangeWindScale = true;
    this->m_GroupWindScale = 1.00f;
    this->m_ChangeCharaWindScale = true;
    this->m_GroupCharaWindScale = 1.00f;
    this->m_ChangeMassScale = true;
    this->m_GroupMassScale = 1.00f;
    this->m_ApplyToAttachments = false;
}

