#include "EndJoint.h"

UEndJoint::UEndJoint() {
    this->AngularVelocity = 1;
    this->AimTransitionTimeBias = 1;
    this->bUseAimUpVector = false;
    this->AimUpRate = 1;
    this->ActiveAimAngularVelocity = 1;
    this->DeactiveAimAngularVelocity = 1;
    this->ActiveAimTranslationVelocity = 1;
    this->DeactiveAimTranslationVelocity = 1;
    this->bEnableVibration = false;
    this->LimitType = EEndJointLimitType::Free;
}

