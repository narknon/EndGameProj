#include "EndParticleModuleWeaponUpgrade.h"

UEndParticleModuleWeaponUpgrade::UEndParticleModuleWeaponUpgrade() {
    this->m_DebugMainCoreResource = 0;
    this->m_DebugSubCoreResource = 0;
    this->m_DebugSkillResource = 0;
    this->m_DebugSubCoreCount = 0;
    this->m_DebugMainSkillCount = 0;
    this->m_DebugSubSkillCount = 0;
    this->m_DebugUpgradeCount = 0;
    this->m_DebugPlayStageEffects = false;
    this->m_DebugPlayStageEffectsActive = false;
    this->m_DebugTravelCore = false;
    this->m_DebugTravelTimer = 1;
    this->m_UpgradeScale = 1;
    this->m_WaitCameraMoveTime = 1;
    this->m_WaitStageEffectsTime = 1;
    this->m_WaitCoreStageEffectsTime = 1;
    this->m_CoreStageEffectsFirstDelayTime = 1;
    this->m_CoreStageEffectsDelayTime = 1;
}

