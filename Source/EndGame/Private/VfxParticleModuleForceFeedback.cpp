#include "VfxParticleModuleForceFeedback.h"

UVfxParticleModuleForceFeedback::UVfxParticleModuleForceFeedback() {
    this->m_PriorityTrack = EEndForceFeedbackTrack::FFB_Track3;
    this->m_Effect = EEndForceFeedbackEffect::FFB_Noise1;
    this->m_bWithPriorityControl = true;
    this->m_bDisableVibrationVolumeSE = false;
}

