#include "EndBattleAIEB1005Controller.h"

bool AEndBattleAIEB1005Controller::RequestReserveActionFastDash(FName InKeyword, const FVector& InGoalPosition, float InFastMoveSpeed, float InMissingDistance, float InMarginDistance, float InLimitTime, float InMoveFriction, bool InUseStartFrontRotate, bool InUseDeceleration, bool InUpdateGoalPosition, bool InDrawTargetPoint) {
    return false;
}

void AEndBattleAIEB1005Controller::RegisterFastDashGotoPosition(const FVector& InDistance) {
}

void AEndBattleAIEB1005Controller::RegisterFastDashEffect(FName InCharaSpecName, FName InEffectFastDashMove) {
}

void AEndBattleAIEB1005Controller::RegisterFastDash(FName InKeyword, FName InStartAnimation, FName InLoopAnimation, FName InEndAnimation, float InVailableDistance, FName InEventNameCompleted, FName InEventNameSuspended, FName InEventNameTimeOver, FName InEventNameHitWall, FName InEventNameMissing, FName InEventNameArrival, FName InEventNameNear) {
}

void AEndBattleAIEB1005Controller::OverwriteGoalPositionFastDash(FName InKeyword, const FVector& InGoalPosition) {
}


FVector AEndBattleAIEB1005Controller::GetFastDashGotoPosition(EPlayerType InPlayerType, EFastDashGoToPositionType InPositionType, EFastDashGoToDistanceType InDistanceType, float InDirYaw) {
    return FVector{};
}

AEndBattleAIEB1005Controller::AEndBattleAIEB1005Controller() {
    this->FastNextBlendTime = 0.20f;
    this->FastBeginToLoopBlendTime = 0.05f;
    this->FastLoopToEndBlendTime = 0.05f;
    this->rotateLengthTime = 20.00f;
    this->ShowDashPoint = false;
    this->ShowGoalPoint = false;
    this->ShowGoalRangePoints = false;
    this->RangePointsYaw = 0.00f;
    this->HideGoalRangePoints = false;
}

