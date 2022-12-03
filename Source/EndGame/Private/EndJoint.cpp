#include "EndJoint.h"

UEndJoint::UEndJoint() {
    this->AngularVelocity = 10.00f;
    this->AimTransitionTimeBias = 1.00f;
    this->bUseAimUpVector = false;
    this->AimUpRate = 1.00f;
    this->ActiveAimAngularVelocity = 0.00f;
    this->DeactiveAimAngularVelocity = 0.00f;
    this->ActiveAimTranslationVelocity = 0.00f;
    this->DeactiveAimTranslationVelocity = 0.00f;
    this->bEnableVibration = false;
    this->LimitType = EEndJointLimitType::Free;
}

