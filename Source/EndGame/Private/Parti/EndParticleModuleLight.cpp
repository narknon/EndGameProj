#include "EndParticleModuleLight.h"

UEndParticleModuleLight::UEndParticleModuleLight() {
    this->m_LightKind = EVfxEffectLightKind::Unpunctual;
    this->m_SourceLengthOffsetRate = 1;
    this->m_bIsBeamLight = false;
    this->m_bRenderVolumetricFogOnly = false;
}

