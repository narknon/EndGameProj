#include "EndBattleAIEB1004Controller.h"

void AEndBattleAIEB1004Controller::SetTotalDamageThreshold(int32 Value) {
}

void AEndBattleAIEB1004Controller::SetTotalDamage(int32 Value) {
}

void AEndBattleAIEB1004Controller::SetAbyssOverTimeEvent(float InOverTime, bool InKeepTimer) {
}

void AEndBattleAIEB1004Controller::ResetAbyssAbilityCount(bool enableResetTime) {
}

bool AEndBattleAIEB1004Controller::RequestReserveActionFastDash(FName InKeyword, const FVector& InGoalPosition, float InFastMoveSpeed, float InMissingDistance, float InMarginDistance, float InLimitTime, float InMoveFriction, bool InUseStartFrontRotate, bool InUseDeceleration, bool InUpdateGoalPosition, bool InDrawTargetPoint) {
    return false;
}

void AEndBattleAIEB1004Controller::RegisterFastDashGotoPosition(const FVector& InDistance) {
}

void AEndBattleAIEB1004Controller::RegisterFastDashEffect(FName InCharaSpecName, FName InEffectFastDashMove) {
}

void AEndBattleAIEB1004Controller::RegisterFastDash(FName InKeyword, FName InStartAnimation, FName InLoopAnimation, FName InEndAnimation, float InVailableDistance, FName InEventNameCompleted, FName InEventNameSuspended, FName InEventNameTimeOver, FName InEventNameHitWall, FName InEventNameMissing, FName InEventNameArrival, FName InEventNameNear) {
}

void AEndBattleAIEB1004Controller::OverwriteGoalPositionFastDash(FName InKeyword, const FVector& InGoalPosition) {
}




void AEndBattleAIEB1004Controller::IncrementAbyssAbilityCount() {
}

int32 AEndBattleAIEB1004Controller::GetTotalDamageThreshold() {
    return 0;
}

int32 AEndBattleAIEB1004Controller::GetTotalDamage() {
    return 0;
}

FVector AEndBattleAIEB1004Controller::GetFastDashGotoPosition(EPlayerType InPlayerType, EFastDashGoToPositionType InPositionType, EFastDashGoToDistanceType InDistanceType, float InDirYaw) {
    return FVector{};
}

float AEndBattleAIEB1004Controller::GetAbyssElapsedTime() {
    return 0.0f;
}

int32 AEndBattleAIEB1004Controller::GetAbyssAbilityCount() {
    return 0;
}

bool AEndBattleAIEB1004Controller::CompareAbyssOverAbilityCount(int32 compareCount) {
    return false;
}

AEndBattleAIEB1004Controller::AEndBattleAIEB1004Controller() {
    this->FastNextBlendTime = 1;
    this->FastBeginToLoopBlendTime = 1;
    this->FastLoopToEndBlendTime = 1;
    this->rotateLengthTime = 1;
    this->ShowDashPoint = false;
    this->ShowGoalPoint = false;
    this->ShowGoalRangePoints = false;
    this->RangePointsYaw = 1;
    this->HideGoalRangePoints = false;
}

