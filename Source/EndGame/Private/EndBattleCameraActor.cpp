#include "EndBattleCameraActor.h"

class AActor;

void AEndBattleCameraActor::BindTargetActor(AActor* NewOwnerActor, AActor* NewTargetActor) {
}

AEndBattleCameraActor::AEndBattleCameraActor() {
    this->AimTarget0_to1_Rate = 1;
    this->AimTarget0_Type = EEndBattleCameraTargetType::None;
    this->bAimTarget0_Fix = false;
    this->AimTarget1_Type = EEndBattleCameraTargetType::None;
    this->bAimTarget1_Fix = false;
    this->AimTarget_RelativeLocation_RotateType = EEndBattleCameraRelativeLocationRotateType::AlwaysRotate;
    this->EyeTargetType = EEndBattleCameraTargetType::None;
    this->EyeTargetRelativeLocationSLerpType = EEndBattleCameraSLerpType::None;
    this->EyeTargetMovableFOV = 1;
    this->bEyeTarget_Fix = false;
    this->EyeToAimTargetRotateType = EEndBattleCameraEyeToAimTargetRotateType::AlwaysRotate;
    this->bEyeToAimTargetRotateIncludePitch = false;
    this->bEyePointFix = false;
    this->bEyeToAimTargetRot_Fix = false;
    this->AimLeapTime = 1;
    this->EyeLeapTime = 1;
    this->Roll = 1;
    this->OthersGameSpeed = 1;
    this->NoOthersGameSpeed = 1;
    this->bIncludeOwnerGameSpeed = false;
    this->bNoIncludeOwnerCameraGameSpeed = false;
    this->InputOffsetType = EndBattleCameraInputOffsetType::None;
    this->bMoveUpEyeWhenHitWall = false;
    this->OwnerActor = NULL;
    this->TargetActor = NULL;
    this->SequenceActor = NULL;
    this->AimTarget0_Actor = NULL;
    this->AimTarget1_Actor = NULL;
    this->EyeTargetActor = NULL;
}

