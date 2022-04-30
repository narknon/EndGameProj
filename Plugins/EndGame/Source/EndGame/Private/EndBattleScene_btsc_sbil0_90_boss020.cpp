#include "EndBattleScene_btsc_sbil0_90_boss020.h"

class AEndCharacter;

void AEndBattleScene_btsc_sbil0_90_boss020::UnlockSetPlayHeight() {
}

void AEndBattleScene_btsc_sbil0_90_boss020::SuspendAll(AEndCharacter* Character) {
}

void AEndBattleScene_btsc_sbil0_90_boss020::StartSetPlayWithErrorCheck(const TArray<AEndCharacter*>& Characters, TEnumAsByte<SetPlayStartSetPlay::Type>& OutSignal) {
}

void AEndBattleScene_btsc_sbil0_90_boss020::StartSetPlay(const TArray<AEndCharacter*>& Characters) {
}

void AEndBattleScene_btsc_sbil0_90_boss020::SetOverrideAerialAttackFallSequence(AEndCharacter* Character, FName FallSequeceName, FName LandSequenceName, FName MotionOwnerCharaSpecId) {
}

void AEndBattleScene_btsc_sbil0_90_boss020::SetForceLookAt(AEndCharacter* Character, AEndCharacter* TargetCharacter) {
}

void AEndBattleScene_btsc_sbil0_90_boss020::SetBattleAbilityRotateStatePointName(AEndCharacter* Character, FName RotatePointName) {
}

void AEndBattleScene_btsc_sbil0_90_boss020::SetBattleAbilityRotateStateLocation(AEndCharacter* Character, const FVector& Location) {
}

void AEndBattleScene_btsc_sbil0_90_boss020::ResetForceLookAt(AEndCharacter* Character) {
}

void AEndBattleScene_btsc_sbil0_90_boss020::RequestUseAbility(FName AbilityID, AEndCharacter* Executor, AEndCharacter* Target, float Timeout, bool ImmediatelyUseAerial, FLatentActionInfo LatentInfo, TEnumAsByte<SetPlayUseAbility::Type>& OutSignal) {
}

void AEndBattleScene_btsc_sbil0_90_boss020::LockSetPlayHeight(float Height) {
}

void AEndBattleScene_btsc_sbil0_90_boss020::KeepRelativePositionWarp(AEndCharacter* BaseCharacter, FVector BaseLocation, FRotator BaseRotation, const TArray<AEndCharacter*>& Characters) {
}

void AEndBattleScene_btsc_sbil0_90_boss020::JumpTo(AEndCharacter* Character, FVector TargetLocation, FRotator TargetRotation, float Duration, FName StartMotionName, FName LoopMotionName, FName OnCompleteMotionName, FName MotionOwnerCharaSpecId, FLatentActionInfo LatentInfo, TEnumAsByte<SetPlayJumpTo::Type>& OutSignal) {
}

bool AEndBattleScene_btsc_sbil0_90_boss020::IsReadySetPlay() {
    return false;
}

void AEndBattleScene_btsc_sbil0_90_boss020::GraviticJump(AEndCharacter* Character, const FVector& landingLocation, float Height, float PeakBias, float turningDuration, FVector LandingForward, FName BeginSequenceName, FName LoopSequenceName, FName EndSequenceName, FName MotionOwnerCharaSpecId, FLatentActionInfo LatentInfo, TEnumAsByte<SetPlayGraviticJump::Type>& OutSignal) {
}

void AEndBattleScene_btsc_sbil0_90_boss020::ForceChangeIdleAction(AEndCharacter* Character, FLatentActionInfo LatentInfo, TEnumAsByte<SetPlayForceChangeIdleAction::Type>& OutSignal) {
}

void AEndBattleScene_btsc_sbil0_90_boss020::FallAction(AEndCharacter* Character, float GravityScale, FName FallSequenceName, FName LandSequenceName, FName MotionOwnerCharaSpecId, FLatentActionInfo LatentInfo, TEnumAsByte<SetPlayFallAction::Type>& OutSignal) {
}

void AEndBattleScene_btsc_sbil0_90_boss020::EndSetPlay() {
}

void AEndBattleScene_btsc_sbil0_90_boss020::AerialAttackJump(FName StartMotionName, FName LoopMotionName, FName NextAbilityID, AEndCharacter* Executor, AEndCharacter* Target, float JumpTime, float Timeout, FName MotionOwnerCharaSpecId, FLatentActionInfo LatentInfo, TEnumAsByte<SetPlayAerialAttackJump::Type>& OutSignal) {
}

AEndBattleScene_btsc_sbil0_90_boss020::AEndBattleScene_btsc_sbil0_90_boss020() {
}

