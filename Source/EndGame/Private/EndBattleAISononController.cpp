#include "EndBattleAISononController.h"

void AEndBattleAISononController::TeleportToCachedLocation() {
}

void AEndBattleAISononController::StartSacrifice() {
}

bool AEndBattleAISononController::RequestLinkAbility(FName ID, EEndLinkAbilityType Type, bool bSupport, bool bAerial, bool bDoWithoutTarget, bool bInstance) {
    return false;
}

AEndBattleAISononController::AEndBattleAISononController() {
    this->LinkCommandMaxDistanceToLeader = 1;
    this->LinkCommandBestDistanceToLeader = 1;
    this->LinkCommandTeleportMinDistance = 1;
    this->LinkCommandFirstStrikeDistance = 1;
    this->LinkCommandFirstStrikeDiffHeight = 1;
    this->LinkAfterEscortWarpDeterTime = 1;
    this->DummyTargetDistanceDefault = 1;
    this->SacrificeDamageSourceID_Heal = TEXT("PC0006_00_Sacrifice_Heal_01");
    this->SacrificeDamageSourceID_ATB = TEXT("PC0006_00_Sacrifice_ATB_01");
    this->SacrificeDamageSourceID_Damage = TEXT("PC0006_00_Sacrifice_Damage_01");
}

