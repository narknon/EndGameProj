#include "EndBattleAISU0002_02Controller.h"

class UEndBattleDamageSourceComponent;

void AEndBattleAISU0002_02Controller::SetTargetDamageSource(UEndBattleDamageSourceComponent* InDamageSource) {
}




AEndBattleAISU0002_02Controller::AEndBattleAISU0002_02Controller() {
    this->BarrierSpeed = 1;
    this->BarrierRange = 1;
    this->BarrierForceRange = 1;
    this->SpinRadius = 1;
    this->SpinSpeed = 1;
    this->SpinAxisSpeed = 1;
}

