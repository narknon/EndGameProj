#include "EndBattleAIEB0029Controller.h"

bool AEndBattleAIEB0029Controller::RequestReserveActionTransAttach(FName InSocket, FTransform InTargetTransform, float InDuration, FName InName) {
    return false;
}

bool AEndBattleAIEB0029Controller::RequestReserveActionFastDash(FName keyword, const FVector& goalPosition, float FastMoveSpeed, float missingDistance, float marginDistance, float limitTime, float moveFriction, bool useStartFrontRotate, bool useDeceleration, bool updateGoalPosition, bool drawTargetPoint) {
    return false;
}

void AEndBattleAIEB0029Controller::RegisterGotoPosition(const FVector& Distance) {
}

void AEndBattleAIEB0029Controller::RegisterFastDashEffect(FName CharaSpecName, FName effectFastDashMove) {
}

void AEndBattleAIEB0029Controller::RegisterFastDash(FName keyword, FName startAnimation, FName LoopAnimation, FName endAnimation, float vailableDistance, FName eventNameCompleted, FName eventNameSuspended, FName eventNameTimeOver, FName eventNameHitWall, FName eventNameMissing, FName eventNameArrival, FName eventNameNear) {
}



FVector AEndBattleAIEB0029Controller::GetGotoPosition(EPlayerType PlayerType, EPraecoMiniGoToPositionType positionType, EPraecoMiniGoToDistanceType DistanceType, float dirYaw, EPraecoMiniGoToMode gotoMode) {
    return FVector{};
}

AEndBattleAIEB0029Controller::AEndBattleAIEB0029Controller() {
    this->FastNextBlendTime = 1;
    this->FastBeginToLoopBlendTime = 1;
    this->FastLoopToEndBlendTime = 1;
    this->rotateLengthTime = 1;
    this->ShowDashPoint = false;
    this->ShowGoalPoint = false;
    this->ShowGoalRangePoints = false;
    this->RangePointsYaw = 1;
    this->HideGoalRangePoints_ = false;
}

