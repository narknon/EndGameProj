#include "EndAIController.h"

class AEndNavModifierVolume;
class AEndCharacter;

void AEndAIController::ToJumpLocation(FVector Location, bool bRotateYaw, FVector lookAt, bool bToTerrain, bool bLocationShift) {
}

void AEndAIController::ToJumpFromNav(AEndNavModifierVolume* InNav, bool bToTerrain) {
}

void AEndAIController::ToJumpFromName(FName InName, bool bToTerrain) {
}

void AEndAIController::ToJump(bool bToTerrain) {
}

void AEndAIController::ToGraviticLookAtJump(const FVector& landingLocation, float Height, float PeakBias, float turningDuration, const FVector& lookAt, bool bToTerrain) {
}

void AEndAIController::ToGraviticJump(const FVector& landingLocation, float Height, float PeakBias, float turningDuration, const FVector& UpVector, const FVector& forwardVector, bool bToTerrain) {
}

void AEndAIController::ToEndJump(bool InTrace, bool IsTraceStartMaxHeightOwn) {
}

void AEndAIController::StopMove() {
}

void AEndAIController::SetPrimaryAnimPack(const FName InName) {
}

void AEndAIController::SetOverrideTurn(bool InOverride, float InAngle) {
}

void AEndAIController::SetOverrideNextJumpForward(bool InOverride, FVector InForward) {
}

void AEndAIController::SetOverrideJumpTime(bool InOverride, float InTime) {
}

void AEndAIController::SetOverrideJumpBias(bool InOverride, float InBias) {
}

void AEndAIController::SetOverrideAerialHeight(bool InOverride, float InHeight) {
}

void AEndAIController::SetNextJumpWallCollision(bool bHit) {
}

void AEndAIController::SetNextJumpMotion(FName Begin, FName Loop, FName End) {
}

void AEndAIController::SetMoveMode(TEnumAsByte<EEndAiMoveMode::Type> InType, bool Skip) {
}

void AEndAIController::SetForceAerialTurn(bool InForce) {
}

void AEndAIController::SetCharacterRotation(FRotator InRotation) {
}

void AEndAIController::SetCharacterLocation(FVector InLocation) {
}

void AEndAIController::SetAIParam(TEnumAsByte<EAIInfoParam::Type> InType, float InParam) {
}

void AEndAIController::SetAIFlagFromOther(TEnumAsByte<EAIInfoFlag::Type> InType, bool InFlag) {
}

void AEndAIController::SetAIFlag(TEnumAsByte<EAIInfoFlag::Type> InType, bool InFlag) {
}

void AEndAIController::SetAerialFixTurn(bool InFix, float InAngle, float InLeapSpeed) {
}

void AEndAIController::SaveVelocity(float DeltaTime) {
}

void AEndAIController::ResetPrimaryAnimPack() {
}

void AEndAIController::ResetOtherWallLock() {
}

void AEndAIController::ResetAerialAccelerationMove() {
}

bool AEndAIController::OverwriteGraviticJumpLandingLocationAndForward(const FVector& overwriteLocation, const FVector& overwriteForward) {
    return false;
}

bool AEndAIController::OverwriteGraviticJumpLandingLocation(const FVector& overwriteLocation, const FVector& overwriteLookAt) {
    return false;
}



void AEndAIController::MoveToGroundByGravity(EMoveToGroundHeightType heightType, float specifiedHeight, float groundOffsetZ, float GravityScale, float MaxVelocity, bool checkNavArea) {
}

void AEndAIController::MoveToGround(float MoveTime, float groundTime, float groundOffsetZ, bool checkNavArea) {
}

bool AEndAIController::IsValidAerialPoint(FVector InLocation) {
    return false;
}

bool AEndAIController::IsMoveModeMigration() {
    return false;
}

bool AEndAIController::IsMoveMode(TEnumAsByte<EEndAiMoveMode::Type> InType) const {
    return false;
}

bool AEndAIController::IsLatestOtherPathBoader(bool ContainSemi) {
    return false;
}

bool AEndAIController::IsJumping() {
    return false;
}

bool AEndAIController::IsAerial() {
    return false;
}

TEnumAsByte<EEndAiMoveMode::Type> AEndAIController::GetMoveMode() const {
    return EEndAiMoveMode::FollowLocation;
}

float AEndAIController::GetLocationAngleAbs(FVector Loc, AEndCharacter* Target) {
    return 0.0f;
}

float AEndAIController::GetLocationAngle(FVector Loc, AEndCharacter* Target) {
    return 0.0f;
}

TEnumAsByte<EEndAiMoveMode::Type> AEndAIController::GetLatestMoveMode() const {
    return EEndAiMoveMode::FollowLocation;
}

FRotator AEndAIController::GetCharacterRotation() {
    return FRotator{};
}

FVector AEndAIController::GetCharacterRootLocation() {
    return FVector{};
}

FVector AEndAIController::GetCharacterLocation() {
    return FVector{};
}

float AEndAIController::GetAIParam(TEnumAsByte<EAIInfoParam::Type> InType) {
    return 0.0f;
}

bool AEndAIController::GetAIFlag(TEnumAsByte<EAIInfoFlag::Type> InType) {
    return false;
}

void AEndAIController::DeactivateResidentBlendMotion(FName Key, float BlendTime) {
}

void AEndAIController::DeactivatePhysicalConstraint(float BlendTime) {
}

void AEndAIController::CorrectRotate(float correctTime) {
}

void AEndAIController::ActivateResidentBlendMotion(FName Key, float BlendTime) {
}

void AEndAIController::ActivatePhysicalConstraint(float BlendTime) {
}

AEndAIController::AEndAIController() {
    this->LookAtTarget = NULL;
    this->FixRootQuantity = 0.00f;
    this->ForceRun = false;
    this->ForceDash = false;
    this->ForceStrafe = false;
    this->ForceStraight = false;
    this->bCanOtherMove = false;
    this->OtherMoveInterval = 0.00f;
    this->OtherMoveIntervalRandom = 0.00f;
    this->bAcceptAerialRootMotionMove = false;
    this->bAcceptAerialRootMotionTurn = true;
    this->bAcceptAerialAITurn = true;
    this->bUseOtherWallMode = true;
    this->bAerialMotionFixIdle = false;
    this->bAcceptAeriaAutoRunWalkIdle = false;
    this->GroundMoveCheckDistance = -1.00f;
    this->bOtherGroundMoveRun = false;
    this->bOtherMoveRun = false;
    this->AcceptMoveOnAngle = 180.00f;
    this->JumpTimeQuantity = 1.00f;
    this->JumpBias = 1.00f;
    this->AerialAcceptPitch = true;
    this->AerialLateralForce = 0.00f;
    this->AerialActorLateralForce = 0.00f;
    this->bAerialHitWall = false;
    this->bAerialHitTerrain = false;
    this->bAerialHitObject = true;
    this->AerialHeight = 450.00f;
    this->AerialConfront = 1000.00f;
    this->AerialFrontAcc = 400.00f;
    this->AerialBackAcc = 1.00f;
    this->AerialSideAcc = 1.00f;
    this->AerialFrontMax = 1000.00f;
    this->AerialBackMax = 1.00f;
    this->AerialSideMax = 1.00f;
    this->AerialUpMax = 1.00f;
    this->AerialDownMax = 1.00f;
    this->AerialStrafe = true;
    this->AerialStrafeThreshold = 10.00f;
    this->AerialForceMoveDirectionTurn = false;
    this->AerialInertia = 1.00f;
    this->AerialBreak = 1.00f;
    this->AerialInertiaAtCannotMove = false;
    this->AerialGoalDistBreak = true;
    this->AerialAccuratelyCheckPoint = 1.00f;
    this->AerialAccuratelyGoal = 0.00f;
    this->AerialGoalAttractionDistance = 500.00f;
    this->AerialGoalAttraction = 1.00f;
    this->AerialRunThreshold = 9999.90f;
    this->AerialOutPathCheckSoconds = 0.00f;
    this->AerialOutPathBreak = 0.50f;
    this->AerialRequestInterval = 0.10f;
    this->AerialRotateMagnification = 1.00f;
    this->FlyCollisionInterval = 0.50f;
    this->AerialAcceptMoveVelocity = 0.00f;
    this->ToWallJumpSkipEndTime = 9999.90f;
    this->EnableDebugDrawJumpLandingLocation = false;
}

