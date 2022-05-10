#include "VfxParticleModuleVolumetricFogProbe.h"

UVfxParticleModuleVolumetricFogProbe::UVfxParticleModuleVolumetricFogProbe() {
    this->bOverride_Color = false;
    this->bOverride_Density = false;
    this->bOverride_PositionJitter = false;
    this->bOverride_DensityModifier = false;
    this->m_PositionJitterStride = 1;
    this->m_PositionJitterCycle = 1;
    this->m_bPositionJitterTimeRandom = false;
    this->m_DensityModifierStride = 1;
}

