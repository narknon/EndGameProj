#include "SQEX_BonamikGlobalConfig.h"

USQEX_BonamikGlobalConfig::USQEX_BonamikGlobalConfig() {
    this->bEnableTickComponent = true;
    this->bDebugDrawBonamik = false;
    this->bDebugDrawWind = false;
    this->bEnableUpdate = true;
    this->bMultiThreadUpdate = true;
    this->bEnableSimulation = true;
    this->bEnableUpdateOverlaps = false;
    this->TimeStep = 0.03f;
    this->ExpectedFrameRate = 30.00f;
    this->MayaAnimationFrameRate = 30.00f;
    this->MayaSimulationFrameRate = 20.00f;
    this->WindSourceSpeedFactor = 100.00f;
    this->bTickWindWhenPaused = true;
    this->ForceResetDeltaTimeDilationThreshold = 2.00f;
    this->ForceResetDeltaTimeDilationPreRoll = 4;
    this->ShouldPreRollDeltaTimeDilationThreshold = 0.10f;
    this->ShouldPreRollDeltaTimeDilationPreRoll = 1;
    this->IgnoreSimulationDeltaTimeDilationThreshold = 10.00f;
    this->DefaultTeleportDistance = 100.00f;
    this->DefaultTeleportPreRoll = 2;
    this->OutOfCamera = ESQEX_Bonamik_GlobalOutOfCamera::Override;
    this->bKBDEnable = true;
    this->bKBDEnableInitializaiton = true;
    this->bKBDEnableCreationOfBonamikComponent = true;
    this->OverrideCollisionIteration = 0;
    this->OverrideLinkIteration = 0;
    this->OverrideSolverIteration = 0;
}

