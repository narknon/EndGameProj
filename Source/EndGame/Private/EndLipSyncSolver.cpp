#include "EndLipSyncSolver.h"

UEndLipSyncSolver::UEndLipSyncSolver() {
    this->AudioPowerTimeOffset = 0.05f;
    this->AudioPowerAttenuationSpeed = 10000.00f;
    this->AudioLargeAttackThreshold = 250000.00f;
    this->AudioSmallAttackThreshold = 100000.00f;
}

