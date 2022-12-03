#include "EndBattleAIEB0016Controller.h"

void AEndBattleAIEB0016Controller::UsedBullet() {
}

void AEndBattleAIEB0016Controller::SetupBullet(int32 Count) {
}

void AEndBattleAIEB0016Controller::SetLinkMode(ERufusLinkMode linkMode) {
}

bool AEndBattleAIEB0016Controller::RequestReserveActionFastDash(FName keyword, const FVector& goalPosition, float FastMoveSpeed, float missingDistance, float marginDistance, float limitTime, float moveFriction, bool useStartFrontRotate, bool useDeceleration, bool updateGoalPosition, bool drawTargetPoint) {
    return false;
}

void AEndBattleAIEB0016Controller::ReloadBullet() {
}

void AEndBattleAIEB0016Controller::RegisterGotoPosition(const FVector& Distance) {
}

void AEndBattleAIEB0016Controller::RegisterFastDashEffect(FName CharaSpecName, FName effectFastDashMove) {
}

void AEndBattleAIEB0016Controller::RegisterFastDash(FName keyword, FName startAnimation, FName LoopAnimation, FName endAnimation, float vailableDistance, FName eventNameCompleted, FName eventNameSuspended, FName eventNameTimeOver, FName eventNameHitWall, FName eventNameMissing, FName eventNameArrival, FName eventNameNear) {
}


FVector AEndBattleAIEB0016Controller::GetGotoPosition(EPlayerType PlayerType, ERufusGoToPositionType positionType, ERufusGoToDistanceType DistanceType, float dirYaw) {
    return FVector{};
}

int32 AEndBattleAIEB0016Controller::GetBulletCount() {
    return 0;
}

bool AEndBattleAIEB0016Controller::CheckLinkMode(ERufusLinkMode linkMode) {
    return false;
}

bool AEndBattleAIEB0016Controller::CheckGunMode(ERufusGunMode gunMode) {
    return false;
}

void AEndBattleAIEB0016Controller::ChangeGunMode(ERufusGunMode gunMode) {
}

AEndBattleAIEB0016Controller::AEndBattleAIEB0016Controller() {
    this->FastNextBlendTime = 0.20f;
    this->FastBeginToLoopBlendTime = 0.05f;
    this->FastLoopToEndBlendTime = 0.05f;
    this->rotateLengthTime = 20.00f;
    this->linkMode_ = ERufusLinkMode::LinkOff;
    this->ShowLinkMode = false;
    this->ShowDashPoint = false;
    this->ShowGoalPoint = false;
    this->ShowGoalRangePoints = false;
    this->RangePointsYaw = 0.00f;
    this->HideGoalRangePoints_ = false;
}

