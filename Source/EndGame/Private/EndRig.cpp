#include "EndRig.h"

UEndRig::UEndRig() {
    this->CenterBoneName = TEXT("C_Hip_a");
    this->HeadBoneName = TEXT("C_Head_a");
    this->LookAtTargetBoneName = TEXT("C_Head_a");
    this->AimAngleBasedVelocityBiasInterpSpeed = 0.50f;
    this->VibrationRestoreSpeed = 10.00f;
    this->VibrationImpactBias = 3.00f;
    this->VibrationAttenuationRate = 0.00f;
    this->LookAtSolver = NULL;
    this->AimSolver = NULL;
    this->BalancingSolver = NULL;
    this->FootEffectorSolver = NULL;
    this->HandEffectorSolver = NULL;
    this->LipSyncSolver = NULL;
}

