#include "EndDataTableAutoCameraShotInfo.h"

FEndDataTableAutoCameraShotInfo::FEndDataTableAutoCameraShotInfo() {
    this->ShotType = 0;
    this->LocationLock = 0;
    this->OverwriteListner = 0;
    this->AimRelativeRate = 1;
    this->FocusPointX = 1;
    this->FocusPointY = 1;
    this->FocusPointZ = 1;
    this->RotatePitch = 1;
    this->RotateYaw = 1;
    this->RotateRoll = 1;
    this->CameraDist = 1;
    this->BlockCorrectTolerance = 1;
    this->HandShake = 1;
    this->FOV = 1;
    this->UseSocketAllRotate = 0;
    this->ShotBaseDist = 1;
    this->AngleDistCorrection = 1;
    this->AngleRotateCorrection = 1;
    this->DistCorrection = 1;
    this->YawCorrection = 1;
    this->XOffsetCorrection = 1;
    this->YOffsetCorrection = 1;
    this->ZOffsetCorrection = 1;
    this->BlendTime = 0;
}

