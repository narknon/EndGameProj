#include "SQEX_BonamikBodyDesc.h"

FSQEX_BonamikBodyDesc::FSQEX_BonamikBodyDesc() {
    this->m_Index = 0;
    this->m_ParentId = 0;
    this->m_ChildId = 0;
    this->m_GroupId = 0;
    this->m_ColId[0] = 0;
    this->m_ColId[1] = 0;
    this->m_ColId[2] = 0;
    this->m_ColId[3] = 0;
    this->m_ColId[4] = 0;
    this->m_ColId[5] = 0;
    this->m_ColId[6] = 0;
    this->m_ColId[7] = 0;
    this->m_IsKinematic = false;
    this->m_IsCollision = false;
    this->m_IsMultipleCollisionObject = false;
    this->m_Mass = 1;
    this->m_Inertia = 1;
    this->m_Radius = 1;
    this->m_Damping = 1;
    this->m_Bounciness = 1;
    this->m_Friction = 1;
    this->m_WindDrag = 1;
    this->m_WindLift = 1;
    this->m_LocalTransCoeff = 1;
    this->m_MaxLocalTrans = 1;
    this->m_ColShape = ESQEX_Bonamik_CollisionShape_None;
    this->m_AddiConstType = ESQEX_Bonamik_ConstraintType_None;
    this->m_AddiConstStr = 1;
    this->m_AddiConstRad = 1;
    this->m_CollisionBatchNo = 0;
    this->m_ConcaveRatio = 1;
    this->m_LFcoeff = 1;
    this->m_ParkRate = 1;
    this->m_MaxLF = 1;
    this->m_LFdrag = 1;
    this->m_LFlift = 1;
}

