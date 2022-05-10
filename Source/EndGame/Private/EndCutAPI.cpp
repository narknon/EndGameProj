#include "EndCutAPI.h"

void UEndCutAPI::UnloadSequenceAssets(FName LevelName) {
}

void UEndCutAPI::SkipCinema(bool Enable) {
}

void UEndCutAPI::SetCurrentTime(FName LevelName, float InTime) {
}

void UEndCutAPI::RequestPlayCutScene(FName LevelName) {
}

bool UEndCutAPI::ReadyCutScene(FName LevelName) {
    return false;
}

bool UEndCutAPI::PlayCutScene(FName LevelName, FName OnPlayTriggerName, bool bStopSkip) {
    return false;
}

void UEndCutAPI::LoadSequenceAssets(FName LevelName, int32 Priority) {
}

bool UEndCutAPI::IsValidSelectWidget() {
    return false;
}

bool UEndCutAPI::IsStable() {
    return false;
}

bool UEndCutAPI::IsSkipCinemaAtThisFrame() {
    return false;
}

bool UEndCutAPI::IsSkipCinema() {
    return false;
}

bool UEndCutAPI::IsPlayReady(FName LevelName) {
    return false;
}

bool UEndCutAPI::IsPlaying_TypeSpecify(const bool EV, const bool LV, const bool MV, const bool fv) {
    return false;
}

bool UEndCutAPI::IsPlaying() {
    return false;
}

bool UEndCutAPI::IsPlayFinished(FName LevelName) {
    return false;
}

bool UEndCutAPI::IsExistEvent(FName LevelName) {
    return false;
}

bool UEndCutAPI::IsActorCreated(FName LevelName) {
    return false;
}

float UEndCutAPI::GetTimeRange(FName LevelName) {
    return 0.0f;
}

float UEndCutAPI::GetCurrentTime(FName LevelName) {
    return 0.0f;
}

UEndCutAPI::UEndCutAPI() {
}

