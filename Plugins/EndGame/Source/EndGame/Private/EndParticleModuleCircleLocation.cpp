#include "EndParticleModuleCircleLocation.h"

UEndParticleModuleCircleLocation::UEndParticleModuleCircleLocation() {
    this->m_Kind = EVfxCircleLocationKind::XZ;
    this->m_RadiusRandom = 1;
    this->m_BeginAngle = 1;
    this->m_BeginAngleRandom = 1;
    this->m_StepAngle = 1;
    this->m_StepAngleRandom = 1;
    this->m_VelocityRandom = 1;
    this->m_bReverseAngle = false;
}

