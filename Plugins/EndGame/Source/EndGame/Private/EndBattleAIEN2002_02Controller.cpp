#include "EndBattleAIEN2002_02Controller.h"

bool AEndBattleAIEN2002_02Controller::GetJumpNavVolume(TArray<FVector> InPoints, const FString& InBattleScene) {
    return false;
}

AEndBattleAIEN2002_02Controller::AEndBattleAIEN2002_02Controller() {
    this->CurrentVolume = NULL;
    this->WebVolume = NULL;
    this->NextVolume = NULL;
}

