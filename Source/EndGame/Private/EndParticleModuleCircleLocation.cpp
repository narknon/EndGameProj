#include "EndParticleModuleCircleLocation.h"

UEndParticleModuleCircleLocation::UEndParticleModuleCircleLocation() {
    this->m_Kind = EVfxCircleLocationKind::XZ;
    this->m_RadiusRandom = 0.00f;
    this->m_BeginAngle = 0.00f;
    this->m_BeginAngleRandom = 0.00f;
    this->m_StepAngle = 10.00f;
    this->m_StepAngleRandom = 0.00f;
    this->m_VelocityRandom = 0.00f;
    this->m_bReverseAngle = false;
}

