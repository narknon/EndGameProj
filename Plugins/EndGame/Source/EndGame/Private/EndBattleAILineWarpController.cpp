#include "EndBattleAILineWarpController.h"

bool AEndBattleAILineWarpController::RequestLineWarp(ELineWarpType InLineWarpType, int32 InDivisionNum, FName InStartMotion, FName InLoopMotion, FName InEndMotion, float InWaitTime, const FVector& InEndLocation, FVector InRandomOffsetRange, float InNearDistance, float InLeaveDistance, float InPointWaitTime, float InTrailVelocityPower, FVector InHeightOffsetTable, ELineWarpCalcPattern InCalcPattern, FVector InPatternParameter) {
    return false;
}


AEndBattleAILineWarpController::AEndBattleAILineWarpController() {
    this->ShowLineWarp = false;
}

