#include "EndBattleAIPcBaseController.h"

class AActor;

void AEndBattleAIPcBaseController::SetDefenceLocaiton(FVector TargetLoaction, float MaxDistance, float BestDistance) {
}

void AEndBattleAIPcBaseController::SetDefenceActor(AActor* TargetActor, float MaxDistance, float BestDistance) {
}

bool AEndBattleAIPcBaseController::RequestUseAbility(FName AbilityID) {
    return false;
}

AEndBattleAIPcBaseController::AEndBattleAIPcBaseController() {
    this->GroundTargetReachableHeight = 300.00f;
    this->AirTargetReachableHeight = 500.00f;
    this->GroundTargetReachableHeightRangedWeapon = 3000.00f;
    this->AirTargetReachableHeightRangedWeapon = 3000.00f;
    this->bCanTeleportWhenCommandApproach = false;
    this->StandbyTimeMax = 2.00f;
    this->StandbyTimeMin = 1.00f;
    this->DangerDamagerSensorRadiusCoe = 1.00f;
}

