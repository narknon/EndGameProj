#include "VfxParticleModuleCameraDistance.h"

UVfxParticleModuleCameraDistance::UVfxParticleModuleCameraDistance() {
    this->m_fBeginDistance = 1000.00f;
    this->m_fBlendDistance = 1000.00f;
    this->m_bIgnoreHeight = true;
    this->m_bLuminanceScale = false;
}

