#include "EndBattleAIRedXIIIController.h"

AEndBattleAIRedXIIIController::AEndBattleAIRedXIIIController() {
    this->StarDustLayAbilityID = TEXT("PC0004_00_Burst002");
    this->HealAbilityID = TEXT("M_MAG_001_heal001_01");
    this->StarDustLayProb = 1;
    this->StarDustLayCoolTime = 1;
    this->HealCheckInterval = 1;
    this->HealProb = 1;
    this->HealCoolTime = 1;
}

