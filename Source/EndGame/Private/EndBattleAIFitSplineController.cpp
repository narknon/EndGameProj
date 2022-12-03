#include "EndBattleAIFitSplineController.h"

class AEndBattleAISpline;

void AEndBattleAIFitSplineController::SuspendSpline() {
}

void AEndBattleAIFitSplineController::SetFitSplineVelocity(float InMax, float InMin) {
}

void AEndBattleAIFitSplineController::SetFitSplineRoll(float InThreashold, float InRate, float InSpeed) {
}

void AEndBattleAIFitSplineController::SetFitSplineAcceleration(float InAcceleration, float InDeceleration) {
}

void AEndBattleAIFitSplineController::ReserveNextSpline(FName InName) {
}

void AEndBattleAIFitSplineController::RequestSplineMove(FName InName, FName InMotionName, float InNextPointDistance) {
}

void AEndBattleAIFitSplineController::RequestOneShotMotion(FName InMotionName) {
}

void AEndBattleAIFitSplineController::RequestConnectSpline(FName InName) {
}

void AEndBattleAIFitSplineController::RequestChangeMotion(FName InMotionName) {
}





FVector AEndBattleAIFitSplineController::GetSplineVector(FName InName) {
    return FVector{};
}

FVector AEndBattleAIFitSplineController::GetSplineLocation(FName InName) {
    return FVector{};
}

FName AEndBattleAIFitSplineController::GetPrevSprine() {
    return NAME_None;
}

float AEndBattleAIFitSplineController::GetCurrentVelocity() {
    return 0.0f;
}

FName AEndBattleAIFitSplineController::GetCurrentSprine() {
    return NAME_None;
}

FName AEndBattleAIFitSplineController::GetConnectGoal() {
    return NAME_None;
}

FName AEndBattleAIFitSplineController::FindNearestSplineNodeName(float InFanAngle, float InFanRadiusMin, float InFanRadiusMax, FName InSocketName, float& NextPointDistance, FName InGroupName) {
    return NAME_None;
}

bool AEndBattleAIFitSplineController::FindNearestSplineNodeLocation(FName& OutSplineNodeName, FVector& OutPointLocation, float& OutNextPointDistance, float InFanAngle, float InFanRadiusMin, float InFanRadiusMax, FName InSocketName, FName InGroupName) {
    return false;
}

AEndBattleAISpline* AEndBattleAIFitSplineController::FindNearestSplineNodeActor(float InFanAngle, float InFanRadiusMin, float InFanRadiusMax, FName InSocketName, float& NextPointDistance, FName InGroupName) {
    return NULL;
}

AEndBattleAIFitSplineController::AEndBattleAIFitSplineController() {
    this->FitSplineMinVelocity = 0.10f;
    this->FitSplineMaxVelocity = 5.00f;
    this->FitSplineAcceleration = 1.00f;
    this->FitSplineDeceleration = 1.00f;
    this->FitSplineAccelerationAngularVelocityThreshold = 180.00f;
    this->FitSplineTurningRollRate = 1.00f;
    this->FitSplineTurningRollInterpSpeed = 1.00f;
    this->FitSplineConnectMargin = 200.00f;
    this->FitSplineConnectUseInterpolation = true;
    this->FitSplineUseSplineAnimInterpolation = false;
    this->FitSplineConnectUseSplineAnimInterpolation = false;
    this->FitSplineUseSplineRotation = false;
    this->ConnectSpline = NULL;
    this->ShowFindSplineFan = false;
}

