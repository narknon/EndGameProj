#include "VfxParticleModuleCameraControl.h"

UVfxParticleModuleCameraControl::UVfxParticleModuleCameraControl() {
    this->m_DebugSetPreviewCamera = false;
    this->m_RefPointName = TEXT("Point_1");
    this->m_BlendTime = 1;
    this->m_BlendExp = 1;
    this->m_EnableGamePad = false;
    this->m_DampingScale = 1;
    this->m_Rstick_RotationSpeed = 1;
    this->m_Rstick_ZoomSpeed = 1;
    this->m_Rstick_ZoomMin = 1;
    this->m_Rstick_ZoomMax = 1;
}

