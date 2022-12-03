#include "EndGameMode.h"

class UObject;

void AEndGameMode::InitEditorPreviewGameMode(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void AEndGameMode::InitEditorGameMode(const UObject* WorldContextObject, FName LocationName, bool QuickStart, FName OverRideEnvName, FName InCutName, FLatentActionInfo LatentInfo) {
}

AEndGameMode::AEndGameMode() {
    this->DebugGameMode = false;
    this->DebugGameMode_Normal = false;
    this->DebugGameMode_E3 = false;
    this->DebugGameMode_Playable = false;
    this->DebugGameModeFlags = 0;
    this->GamePlayMode = false;
    this->TotalTickTime = 0;
    this->FrameTickTime = 0;
    this->FrameTickCount = 0;
    this->SystemDeltaTimeSeconds = 0.00f;
    this->CrossSaveManager = NULL;
}

