#include "FA0122_AnimInstance.h"

void UFA0122_AnimInstance::RequestBasementAngle(float Angle) {
}

void UFA0122_AnimInstance::RequestArmHeightRate(float Rate) {
}

float UFA0122_AnimInstance::GetMinArmHeight() const {
    return 0.0f;
}

float UFA0122_AnimInstance::GetMaxArmHeight() const {
    return 0.0f;
}

float UFA0122_AnimInstance::GetCurrentBasementAngle() const {
    return 0.0f;
}

float UFA0122_AnimInstance::GetCurrentArmHeightRate() const {
    return 0.0f;
}

float UFA0122_AnimInstance::GetArmHeightRateFromHeight(float Height) const {
    return 0.0f;
}

UFA0122_AnimInstance::UFA0122_AnimInstance() {
    this->ArmBones.AddDefaulted(4);
    this->TransformCacheBones.AddDefaulted(1);
    this->PoseReferenceAnimation = NULL;
    this->PoseReferenceAnimationFrameRate = 30.00f;
    this->CurrentArmState = EFA0122_ArmState::Deactive;
    this->RequestedBasementAngle = 0.00f;
    this->CurrentBasementAngle = 0.00f;
    this->BasementAngleSpeed = 30.00f;
    this->RequestedArmHeightRate = 1.00f;
    this->CurrentArmHeightRate = 1.00f;
    this->ArmHeightRateSpeed = 1.00f;
    this->MinArmHeight = 0.00f;
    this->MaxArmHeight = 0.00f;
    this->RequestedHandGrabRate = 0.00f;
    this->CurrentHandGrabRate = 0.00f;
    this->HandGrabRateSpeed = 1.00f;
}

