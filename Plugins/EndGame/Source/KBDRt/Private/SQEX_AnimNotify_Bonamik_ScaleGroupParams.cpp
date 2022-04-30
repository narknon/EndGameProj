#include "SQEX_AnimNotify_Bonamik_ScaleGroupParams.h"

USQEX_AnimNotify_Bonamik_ScaleGroupParams::USQEX_AnimNotify_Bonamik_ScaleGroupParams() {
    this->m_ChangeInnerCone = true;
    this->m_InnerConeScale = 1;
    this->m_ChangeOuterCone = true;
    this->m_OuterConeScale = 1;
    this->m_ChangeLocalForce = true;
    this->m_LocalForceScale = 1;
    this->m_ChangeWindScale = true;
    this->m_GroupWindScale = 1;
    this->m_ChangeCharaWindScale = true;
    this->m_GroupCharaWindScale = 1;
    this->m_ChangeMassScale = true;
    this->m_GroupMassScale = 1;
    this->m_ApplyToAttachments = false;
}

