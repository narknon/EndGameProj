#include "BodyDriver_DebugImpulseTuningSet.h"

UBodyDriver_DebugImpulseTuningSet::UBodyDriver_DebugImpulseTuningSet() {
    this->ForceSwitchToAnimTime = 1;
    this->EnableRandomImpulses = false;
    this->TreatAsMelee = false;
    this->TreatAsExplosion = false;
    this->ImpulseType = kMessageImpulseTypeDefault;
    this->Frequency = 1;
    this->OnlyApplyOncePerActivation = false;
    this->ApplyWhenInactive = false;
    this->ApplyWhenUnbalanced = false;
    this->WaitToApplyAfterBalancing = 1;
    this->ChanceOfWeakRandomImpulse = 1;
    this->ChanceOfStrongRandomImpulse = 1;
    this->ChanceOfMeleeMediumRandomImpulse = 1;
    this->PartOverride = kPartPelvis;
    this->UseOverrideImpulseDirection = false;
    this->UseLastAppliedImpulse = false;
    this->EnableClickImpulses = false;
    this->ChanceOfWeakClickImpulse = 1;
    this->ChanceOfStrongClickImpulse = 1;
}

