#include "SQEX_BonamikGlobalConfig.h"

USQEX_BonamikGlobalConfig::USQEX_BonamikGlobalConfig() {
    this->bEnableTickComponent = true;
    this->bDebugDrawBonamik = false;
    this->bDebugDrawWind = false;
    this->bEnableUpdate = true;
    this->bMultiThreadUpdate = true;
    this->bEnableSimulation = true;
    this->bEnableUpdateOverlaps = false;
    this->TimeStep = 1;
    this->ExpectedFrameRate = 1;
    this->MayaAnimationFrameRate = 1;
    this->MayaSimulationFrameRate = 1;
    this->WindSourceSpeedFactor = 1;
    this->bTickWindWhenPaused = true;
    this->ForceResetDeltaTimeDilationThreshold = 1;
    this->ForceResetDeltaTimeDilationPreRoll = 0;
    this->ShouldPreRollDeltaTimeDilationThreshold = 1;
    this->ShouldPreRollDeltaTimeDilationPreRoll = 0;
    this->IgnoreSimulationDeltaTimeDilationThreshold = 1;
    this->DefaultTeleportDistance = 1;
    this->DefaultTeleportPreRoll = 0;
    this->OutOfCamera = ESQEX_Bonamik_GlobalOutOfCamera::Default;
    this->bKBDEnable = true;
    this->bKBDEnableInitializaiton = true;
    this->bKBDEnableCreationOfBonamikComponent = true;
    this->OverrideCollisionIteration = 0;
    this->OverrideLinkIteration = 0;
    this->OverrideSolverIteration = 0;
}

