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
    this->GroundTargetReachableHeight = 1;
    this->AirTargetReachableHeight = 1;
    this->GroundTargetReachableHeightRangedWeapon = 1;
    this->AirTargetReachableHeightRangedWeapon = 1;
    this->bCanTeleportWhenCommandApproach = false;
    this->StandbyTimeMax = 1;
    this->StandbyTimeMin = 1;
    this->DangerDamagerSensorRadiusCoe = 1;
}

