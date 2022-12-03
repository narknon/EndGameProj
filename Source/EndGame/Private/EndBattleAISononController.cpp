#include "EndBattleAISononController.h"

void AEndBattleAISononController::TeleportToCachedLocation() {
}

void AEndBattleAISononController::StartSacrifice() {
}

bool AEndBattleAISononController::RequestLinkAbility(FName ID, EEndLinkAbilityType Type, bool bSupport, bool bAerial, bool bDoWithoutTarget, bool bInstance) {
    return false;
}

AEndBattleAISononController::AEndBattleAISononController() {
    this->LinkCommandMaxDistanceToLeader = 800.00f;
    this->LinkCommandBestDistanceToLeader = 200.00f;
    this->LinkCommandTeleportMinDistance = 1000.00f;
    this->LinkCommandFirstStrikeDistance = 800.00f;
    this->LinkCommandFirstStrikeDiffHeight = 220.00f;
    this->LinkAfterEscortWarpDeterTime = 1.50f;
    this->DummyTargetDistanceDefault = 400.00f;
    this->SacrificeDamageSourceID_Heal = TEXT("PC0006_00_Sacrifice_Heal_01");
    this->SacrificeDamageSourceID_ATB = TEXT("PC0006_00_Sacrifice_ATB_01");
    this->SacrificeDamageSourceID_Damage = TEXT("PC0006_00_Sacrifice_Damage_01");
}

