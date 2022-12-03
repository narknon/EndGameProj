#include "EndBattleAIRedXIIIController.h"

AEndBattleAIRedXIIIController::AEndBattleAIRedXIIIController() {
    this->StarDustLayAbilityID = TEXT("PC0004_00_Burst002");
    this->HealAbilityID = TEXT("M_MAG_001_heal001_01");
    this->StarDustLayProb = 0.50f;
    this->StarDustLayCoolTime = 15.00f;
    this->HealCheckInterval = 2.00f;
    this->HealProb = 0.30f;
    this->HealCoolTime = 15.00f;
}

