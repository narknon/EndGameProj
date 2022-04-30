#include "EndBattleAIEB0017Controller.h"

void AEndBattleAIEB0017Controller::SetLinkMode(EDarknationLinkMode linkMode) {
}

bool AEndBattleAIEB0017Controller::CheckLinkMode(EDarknationLinkMode linkMode) {
    return false;
}

AEndBattleAIEB0017Controller::AEndBattleAIEB0017Controller() {
    this->linkMode_ = EDarknationLinkMode::LinkOff;
    this->debugDrawLinkMode = false;
}

