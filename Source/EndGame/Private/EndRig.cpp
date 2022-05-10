#include "EndRig.h"

UEndRig::UEndRig() {
    this->CenterBoneName = TEXT("C_Hip_a");
    this->HeadBoneName = TEXT("C_Head_a");
    this->LookAtTargetBoneName = TEXT("C_Head_a");
    this->AimAngleBasedVelocityBiasInterpSpeed = 1;
    this->VibrationRestoreSpeed = 1;
    this->VibrationImpactBias = 1;
    this->VibrationAttenuationRate = 1;
    this->LookAtSolver = NULL;
    this->AimSolver = NULL;
    this->BalancingSolver = NULL;
    this->FootEffectorSolver = NULL;
    this->HandEffectorSolver = NULL;
    this->LipSyncSolver = NULL;
}

