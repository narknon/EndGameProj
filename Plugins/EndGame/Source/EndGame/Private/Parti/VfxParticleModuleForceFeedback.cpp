#include "VfxParticleModuleForceFeedback.h"

UVfxParticleModuleForceFeedback::UVfxParticleModuleForceFeedback() {
    this->m_PriorityTrack = EEndForceFeedbackTrack::FFB_Track0;
    this->m_Effect = EEndForceFeedbackEffect::FFB_Effect0;
    this->m_bWithPriorityControl = true;
    this->m_bDisableVibrationVolumeSE = false;
}

