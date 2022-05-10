#include "EndDataTableCutSceneList.h"

FEndDataTableCutSceneList::FEndDataTableCutSceneList() {
    this->OverrideEnableDrawDistance = 1;
    this->OverrideInCameraTickDistance = 1;
    this->StartCameraBlend = 0;
    this->StartCameraBlendStartRate = 1;
    this->StartCameraBlendEndRate = 1;
    this->StartCameraBlendType = 0;
    this->StartAimBlendStartRate = 1;
    this->StartAimBlendEndRate = 1;
    this->StartAimBlendType = 0;
    this->StartFOVBlendStartRate = 1;
    this->StartFOVBlendEndRate = 1;
    this->StartFovBlendType = 0;
    this->StartCameraBlendTime = 0;
    this->EndCameraBlend = 0;
    this->EndCameraBlendStartRate = 1;
    this->EndCameraBlendEndRate = 1;
    this->EndCameraBlendType = 0;
    this->EndAimBlendStartRate = 1;
    this->EndAimBlendEndRate = 1;
    this->EndAimBlendType = 0;
    this->EndFOVBlendStartRate = 1;
    this->EndFOVBlendEndRate = 1;
    this->EndFovBlendType = 0;
    this->LevelTimingReadyCutScene = 0;
    this->EmgCameraPositionX = 1;
    this->EmgCameraPositionY = 1;
    this->EmgCameraPositionZ = 1;
    this->EmgCameraAimPositionX = 1;
    this->EmgCameraAimPositionY = 1;
    this->EmgCameraAimPositionZ = 1;
    this->InMotionBlendFrame = 0;
    this->PopCharaLimitOnTick = 0;
    this->ExtraFlags = 0;
}

