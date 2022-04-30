#include "BodyDriver_BaseDataTuningSet.h"

UBodyDriver_BaseDataTuningSet::UBodyDriver_BaseDataTuningSet() {
    this->EnableBodyDriver = true;
    this->CharacterType = kBiped;
    this->TotalMass = 1;
    this->TreatAuthoredMassesAsDensities = true;
    this->UseReferenceForIdlePose = false;
    this->UpBoundHack = 1;
    this->UseIdleForTracking = true;
    this->StandingFootFriction = 1;
    this->ExternalDriveIterations = 0;
    this->InternalDriveIterations = 0;
    this->MinPositionIterations = 0;
    this->MinVelocityIterations = 0;
    this->MaxPartInitialLinearVelocity = 1;
    this->MaxPartInitialAngularVelocity = 1;
    this->InitialLimitTwistWideningAdd = 1;
    this->InitialLimitSwingWideningAdd = 1;
    this->PushesPartRadius = 1;
    this->PushesMaxMagnitude = 1;
    this->PushesMagnitudeScaleDepth = 1;
    this->SwingDirectionWeight = 1;
    this->MinMeleeAngleFromAttacker = 1;
    this->MaxMeleeAngleFromAttacker = 1;
    this->DontAllowOffAxisImpacts = false;
    this->UseBalanceBehaviorForStagger = false;
    this->MeleeDirectionRandomizationAllowance = 1;
    this->DefaultBodyJointSpeed = 1;
    this->DisableBonamik = false;
    this->SlipperyFeet = false;
    this->OverridePelvisToHeadUprightAngle = 1;
}

