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
    this->PoseReferenceAnimationFrameRate = 1;
    this->CurrentArmState = EFA0122_ArmState::Deactive;
    this->RequestedBasementAngle = 1;
    this->CurrentBasementAngle = 1;
    this->BasementAngleSpeed = 1;
    this->RequestedArmHeightRate = 1;
    this->CurrentArmHeightRate = 1;
    this->ArmHeightRateSpeed = 1;
    this->MinArmHeight = 1;
    this->MaxArmHeight = 1;
    this->RequestedHandGrabRate = 1;
    this->CurrentHandGrabRate = 1;
    this->HandGrabRateSpeed = 1;
}

