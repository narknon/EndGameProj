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
    this->FixRootQuantity = 1;
    this->ForceRun = false;
    this->ForceDash = false;
    this->ForceStrafe = false;
    this->ForceStraight = false;
    this->bCanOtherMove = false;
    this->OtherMoveInterval = 1;
    this->OtherMoveIntervalRandom = 1;
    this->bAcceptAerialRootMotionMove = false;
    this->bAcceptAerialRootMotionTurn = true;
    this->bAcceptAerialAITurn = true;
    this->bUseOtherWallMode = true;
    this->bAerialMotionFixIdle = false;
    this->bAcceptAeriaAutoRunWalkIdle = false;
    this->GroundMoveCheckDistance = 1;
    this->bOtherGroundMoveRun = false;
    this->bOtherMoveRun = false;
    this->AcceptMoveOnAngle = 1;
    this->JumpTimeQuantity = 1;
    this->JumpBias = 1;
    this->AerialAcceptPitch = true;
    this->AerialLateralForce = 1;
    this->AerialActorLateralForce = 1;
    this->bAerialHitWall = false;
    this->bAerialHitTerrain = false;
    this->bAerialHitObject = true;
    this->AerialHeight = 1;
    this->AerialConfront = 1;
    this->AerialFrontAcc = 1;
    this->AerialBackAcc = 1;
    this->AerialSideAcc = 1;
    this->AerialFrontMax = 1;
    this->AerialBackMax = 1;
    this->AerialSideMax = 1;
    this->AerialUpMax = 1;
    this->AerialDownMax = 1;
    this->AerialStrafe = true;
    this->AerialStrafeThreshold = 1;
    this->AerialForceMoveDirectionTurn = false;
    this->AerialInertia = 1;
    this->AerialBreak = 1;
    this->AerialInertiaAtCannotMove = false;
    this->AerialGoalDistBreak = true;
    this->AerialAccuratelyCheckPoint = 1;
    this->AerialAccuratelyGoal = 1;
    this->AerialGoalAttractionDistance = 1;
    this->AerialGoalAttraction = 1;
    this->AerialRunThreshold = 1;
    this->AerialOutPathCheckSoconds = 1;
    this->AerialOutPathBreak = 1;
    this->AerialRequestInterval = 1;
    this->AerialRotateMagnification = 1;
    this->FlyCollisionInterval = 1;
    this->AerialAcceptMoveVelocity = 1;
    this->ToWallJumpSkipEndTime = 1;
    this->EnableDebugDrawJumpLandingLocation = false;
}

