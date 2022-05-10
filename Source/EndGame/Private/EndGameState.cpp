#include "EndGameState.h"

class UObject;

void AEndGameState::WaitGameState(const UObject* WorldContextObject, EGameState toState, FLatentActionInfo LatentInfo) {
}

void AEndGameState::WaitGameDifferentStateList(const UObject* WorldContextObject, TArray<EGameState> toStateList, FLatentActionInfo LatentInfo) {
}

void AEndGameState::WaitGameDifferentState(const UObject* WorldContextObject, EGameState toState, FLatentActionInfo LatentInfo) {
}

void AEndGameState::SetRequestGamePauseOn(EGamePause Pause) {
}

void AEndGameState::SetGameStatus(EGameStatus Status, bool Set) {
}

void AEndGameState::SetGameSpeed(EGameSpeed Type, float Speed) {
}

void AEndGameState::SendGameTrigger(const UObject* WorldContextObject, EGameTrigger Trigger, EGameState toState, FLatentActionInfo LatentInfo) {
}

void AEndGameState::OnDebugPauseFrameSkip() {
}

void AEndGameState::OnDebugPauseEnable() {
}

bool AEndGameState::IsGameStatus(EGameStatus Status) {
    return false;
}

bool AEndGameState::IsGamePause() {
    return false;
}

float AEndGameState::GetGameSpeed() {
    return 0.0f;
}

void AEndGameState::ActivateLocation(const FString& TargetLocation, FName OverRideEnvName) {
}

AEndGameState::AEndGameState() {
    this->GameState = EGameState::EGameState_NONE;
    this->GameStateChangeCount = 0;
    this->GameMode = EGameMode::EGameMode_PLAY_GAME;
    this->ActiveLocationSlot = 0;
    this->PrevActiveLocationSlot = 0;
    this->bRequestActiveLocation = false;
    this->bRequestTruthLocation = false;
    this->GameStatus = 0;
    this->GamePause = 0;
    this->RequestGamePauseOn = 0;
    this->RequestGamePauseOff = 0;
    this->NextPauseMenuKind = EEndSystemPauseMenuKind::None;
    this->HideWorld = false;
    this->GameSpeed[0] = 1;
    this->GameSpeed[1] = 1;
    this->GameSpeed[2] = 1;
    this->GameSpeed[3] = 1;
    this->GameSpeed[4] = 1;
    this->GameSpeed[5] = 1;
    this->GameSpeed[6] = 1;
    this->GameSpeed[7] = 1;
    this->GameSpeed[8] = 1;
    this->GameSpeed[9] = 1;
    this->GameSpeed[10] = 1;
}

