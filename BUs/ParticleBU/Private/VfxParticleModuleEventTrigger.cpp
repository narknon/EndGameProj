#include "VfxParticleModuleEventTrigger.h"

UVfxParticleModuleEventTrigger::UVfxParticleModuleEventTrigger() {
    this->m_TriggerType = EVfxParticleEventTriggerType::EVPETT_None;
    this->m_TriggerTime = 1;
    this->m_TriggerParam = 0;
    this->m_bRepeatTrigger = false;
}

