#include "EndBattleCameraCutChangeData.h"

FEndBattleCameraCutChangeData::FEndBattleCameraCutChangeData() {
    this->TimingType = EEndBattleCameraChangeTimingType::None;
    this->CutEndType = EEndBattleCameraCutEndType::None;
    this->BeginBlendBasePosType = EEndBattleCameraBlendBasePosType::Aim;
    this->EndBlendBasePosType = EEndBattleCameraBlendBasePosType::Aim;
}

