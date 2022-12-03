#include "EndDataTableCutSceneList.h"

FEndDataTableCutSceneList::FEndDataTableCutSceneList() {
    this->OverrideEnableDrawDistance = 0.00f;
    this->OverrideInCameraTickDistance = 0.00f;
    this->StartCameraBlend = 0;
    this->StartCameraBlendStartRate = 0.00f;
    this->StartCameraBlendEndRate = 0.00f;
    this->StartCameraBlendType = 0;
    this->StartAimBlendStartRate = 0.00f;
    this->StartAimBlendEndRate = 0.00f;
    this->StartAimBlendType = 0;
    this->StartFOVBlendStartRate = 0.00f;
    this->StartFOVBlendEndRate = 0.00f;
    this->StartFovBlendType = 0;
    this->StartCameraBlendTime = 0;
    this->EndCameraBlend = 0;
    this->EndCameraBlendStartRate = 0.00f;
    this->EndCameraBlendEndRate = 0.00f;
    this->EndCameraBlendType = 0;
    this->EndAimBlendStartRate = 0.00f;
    this->EndAimBlendEndRate = 0.00f;
    this->EndAimBlendType = 0;
    this->EndFOVBlendStartRate = 0.00f;
    this->EndFOVBlendEndRate = 0.00f;
    this->EndFovBlendType = 0;
    this->LevelTimingReadyCutScene = 0;
    this->EmgCameraPositionX = 0.00f;
    this->EmgCameraPositionY = 0.00f;
    this->EmgCameraPositionZ = 0.00f;
    this->EmgCameraAimPositionX = 0.00f;
    this->EmgCameraAimPositionY = 0.00f;
    this->EmgCameraAimPositionZ = 0.00f;
    this->InMotionBlendFrame = 0;
    this->PopCharaLimitOnTick = 0;
    this->ExtraFlags = 0;
}

