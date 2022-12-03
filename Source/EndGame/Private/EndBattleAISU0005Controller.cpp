#include "EndBattleAISU0005Controller.h"

void AEndBattleAISU0005Controller::SetAIPCOverrideCautionDistance(EPlayerType PlayerType, float Distance) {
}

void AEndBattleAISU0005Controller::ResetAIPCOverrideCautionDistance(EPlayerType PlayerType) {
}

void AEndBattleAISU0005Controller::OverrideTargetLocation(bool enableOverride, FVector overrideLocation) {
}

AEndBattleAISU0005Controller::AEndBattleAISU0005Controller() {
    this->MeteorDivePrepareRotateYaw = 360.00f;
    this->MeteorDivePrepareRotatePitch = 360.00f;
    this->MeteorDiveLoopRotateYaw = 180.00f;
    this->MeteorDiveLoopRotatePitch = 180.00f;
    this->MeteorDiveBeginSpeed = 1000.00f;
    this->MeteorDiveAddSpeed = 1000.00f;
    this->MeteorDiveOffsetZ = 200.00f;
}

