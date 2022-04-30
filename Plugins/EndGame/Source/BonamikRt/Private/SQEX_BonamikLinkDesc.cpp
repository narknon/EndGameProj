#include "SQEX_BonamikLinkDesc.h"

FSQEX_BonamikLinkDesc::FSQEX_BonamikLinkDesc() {
    this->m_ParentId = 0;
    this->m_ChildId = 0;
    this->m_LinkType = ESQEX_Bonamik_LinkType_Lateral;
    this->m_IsSelfCollision = false;
    this->m_EnableJointTwist = false;
    this->m_EnableCone = false;
    this->m_EnableConeAnimation = false;
    this->m_LinkStr = 1;
    this->m_LinkParentStr = 1;
    this->m_ConeInnerStr = 1;
    this->m_ConeOuterStr = 1;
    this->m_ConeParentStr = 1;
    this->m_LimitY = 1;
    this->m_LimitZ = 1;
    this->m_ConeOffsetY = 1;
    this->m_ConeOffsetZ = 1;
    this->m_LimitOffsetY = 1;
    this->m_LimitOffsetZ = 1;
    this->m_IsCollisionReceiver = false;
    this->m_IsCollisionRepulsor = false;
    this->m_IsLRA = false;
    this->m_LRAstr = 1;
    this->m_LRAdamping = 1;
    this->m_LinkBatchNo = 0;
    this->m_ConeBatchNo = 0;
    this->m_CollisionBatchNo = 0;
    this->m_PinRadius = 1;
    this->m_PinStr = 1;
    this->m_KdiTrans = 1;
    this->m_KdiRot = 1;
    this->m_ConcaveRatio = 1;
}

