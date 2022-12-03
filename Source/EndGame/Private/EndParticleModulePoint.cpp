#include "EndParticleModulePoint.h"

UEndParticleModulePoint::UEndParticleModulePoint() {
    this->m_PointName = TEXT("Point_1");
    this->m_Kind = EELK_Self;
    this->m_RotationMatrixOrder = EVfxRotationMatrixOrder::Default;
    this->m_BlendTime = 1.00f;
    this->m_BlendExp = 3.00f;
    this->m_bIsWorldRayCast = true;
    this->m_CollisionTypes.AddDefaulted(4);
    this->m_bUseHitNormal = true;
    this->m_fRayCastSpawnParticleScale = 1.00f;
    this->m_fHitRayCastSpawnParticleScale = 1.00f;
}

