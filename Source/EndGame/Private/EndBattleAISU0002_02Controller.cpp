#include "EndBattleAISU0002_02Controller.h"

class UEndBattleDamageSourceComponent;

void AEndBattleAISU0002_02Controller::SetTargetDamageSource(UEndBattleDamageSourceComponent* InDamageSource) {
}




AEndBattleAISU0002_02Controller::AEndBattleAISU0002_02Controller() {
    this->BarrierSpeed = 5000.00f;
    this->BarrierRange = 1000.00f;
    this->BarrierForceRange = 300.00f;
    this->SpinRadius = 300.00f;
    this->SpinSpeed = 180.00f;
    this->SpinAxisSpeed = 30.00f;
}

