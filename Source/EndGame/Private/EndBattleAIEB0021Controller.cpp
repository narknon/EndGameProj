#include "EndBattleAIEB0021Controller.h"

class AEndCharacter;

void AEndBattleAIEB0021Controller::SetHitTerrainDamageSourceName(FName damageSourceName) {
}

void AEndBattleAIEB0021Controller::SetHitTerrainAbilityName(FName abilitiName) {
}

bool AEndBattleAIEB0021Controller::RequestBlownAway(AEndCharacter* causerCharacter, FName& OutTargetName, FVector& OutTargetLocation) {
    return false;
}



void AEndBattleAIEB0021Controller::DisableCounter() {
}

AEndBattleAIEB0021Controller::AEndBattleAIEB0021Controller() {
    this->DrawInBlowArea = false;
}

