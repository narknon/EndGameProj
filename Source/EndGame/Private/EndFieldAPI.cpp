#include "EndFieldAPI.h"

class UObject;
class AEndCharacter;
class AActor;

void UEndFieldAPI::WaitStable(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

FName UEndFieldAPI::StartWaveBattleSceneReturnWaveBattleSceneId(FName baseBattleSceneId, EndWaveBattleSceneType Type, int32 IntegerArgument00, int32 IntegerArgument01, int32 IntegerArgument02, int32 IntegerArgument03, TArray<FTransform> enemyPopTransforms) {
    return NAME_None;
}

TArray<FName> UEndFieldAPI::StartWaveBattleScene(FName baseBattleSceneId, EndWaveBattleSceneType Type, int32 IntegerArgument00, int32 IntegerArgument01, int32 IntegerArgument02, int32 IntegerArgument03, TArray<FTransform> enemyPopTransforms) {
    return TArray<FName>();
}

void UEndFieldAPI::SetTruthLocationName(FName truthLocationName) {
}

void UEndFieldAPI::SetOverrideTargetLengthCameraFlavorByBP(FName CharaSpecID, FName dataTableCameraFlavorID) {
}

void UEndFieldAPI::SetExecSlotIndex(int32 SlotIndex) {
}

void UEndFieldAPI::SetDebugFlag(EEndDebugFlag Flag) {
}

void UEndFieldAPI::SendStateTriggerDirect(const FString& StateTriggerName) {
}

void UEndFieldAPI::SendStateTrigger(const FString& StateTriggerName) {
}

void UEndFieldAPI::SendPlannerEventTrigger(const FName& PlannerEventID, const FString& TriggerId) {
}

void UEndFieldAPI::ResetOverrideTargetLengthCameraFlavorByBP(FName CharaSpecID) {
}

bool UEndFieldAPI::ResetFieldAiLookAtTarget(FName TargetActorName) {
    return false;
}

void UEndFieldAPI::RefreshCacheBGM(const FString& cacheBGM) {
}

void UEndFieldAPI::PlayBGM(EndFieldBGMLayer Layer, FName BGM, float fadeStartTime, float fadeEndTime, bool crossFade) {
}

bool UEndFieldAPI::IsWaveCharacter(AEndCharacter* chara) {
    return false;
}

bool UEndFieldAPI::IsWaveBattleScene(FName baseBattleSceneId, int32 waveIndex) {
    return false;
}

bool UEndFieldAPI::IsStable() {
    return false;
}

bool UEndFieldAPI::IsShowEscaping() {
    return false;
}

bool UEndFieldAPI::IsEscaping() {
    return false;
}

bool UEndFieldAPI::IsEncountWaveBattleScene(FName BattleSceneID) {
    return false;
}

bool UEndFieldAPI::IsEnableUpdateBattleParameter() {
    return false;
}

bool UEndFieldAPI::IsEnableSkipPauseMenu() {
    return false;
}

bool UEndFieldAPI::IsEnableFieldFullScreenMainMenu() {
    return false;
}

bool UEndFieldAPI::IsEnableFieldControler(bool bEncount) {
    return false;
}

FTransform UEndFieldAPI::GetEndTargetPointTransform(FName NodeName) {
    return FTransform{};
}

FVector UEndFieldAPI::GetEndTargetPointLocation(FName NodeName) {
    return FVector{};
}

void UEndFieldAPI::FinishBattleScene(FName baseBattleSceneId) {
}

FTransform UEndFieldAPI::FindEndTargetPoint(FName NodeName) {
    return FTransform{};
}

bool UEndFieldAPI::FieldAiLookAtTarget(FName TargetActorName, FName LookAtTargetActorName, FVector LookAtTargetLocation, float ReactionDistance, bool InIgnoreLookAtDeactiveAngle, bool InIsLookAwayFromActor) {
    return false;
}

void UEndFieldAPI::ExitLoation() {
}

void UEndFieldAPI::EntryLocation(const FName& LocationName) {
}

void UEndFieldAPI::DelayFinishBattleScene(FName baseBattleSceneId, float DelayTime) {
}

void UEndFieldAPI::DeactivateCameraFlavorReset() {
}

void UEndFieldAPI::ClearDebugFlag(EEndDebugFlag Flag) {
}

bool UEndFieldAPI::CheckExclusion(EndFieldExclusion enumValue) {
    return false;
}

void UEndFieldAPI::CallbackCreatePlayerActor(const FName& partyActorName, AActor* Actor) {
}

void UEndFieldAPI::ActivateCameraFlavorReset(float Pitch, float Yaw) {
}

UEndFieldAPI::UEndFieldAPI() {
}

