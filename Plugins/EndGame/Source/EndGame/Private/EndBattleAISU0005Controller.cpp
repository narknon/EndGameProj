#include "EndBattleAISU0005Controller.h"

void AEndBattleAISU0005Controller::SetAIPCOverrideCautionDistance(EPlayerType PlayerType, float Distance) {
}

void AEndBattleAISU0005Controller::ResetAIPCOverrideCautionDistance(EPlayerType PlayerType) {
}

void AEndBattleAISU0005Controller::OverrideTargetLocation(bool enableOverride, FVector overrideLocation) {
}

AEndBattleAISU0005Controller::AEndBattleAISU0005Controller() {
    this->MeteorDivePrepareRotateYaw = 1;
    this->MeteorDivePrepareRotatePitch = 1;
    this->MeteorDiveLoopRotateYaw = 1;
    this->MeteorDiveLoopRotatePitch = 1;
    this->MeteorDiveBeginSpeed = 1;
    this->MeteorDiveAddSpeed = 1;
    this->MeteorDiveOffsetZ = 1;
}

