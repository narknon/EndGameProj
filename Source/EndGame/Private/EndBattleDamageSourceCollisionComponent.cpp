#include "EndBattleDamageSourceCollisionComponent.h"

UEndBattleDamageSourceCollisionComponent::UEndBattleDamageSourceCollisionComponent() {
    this->GroupNumber = 0;
    this->bStartWithHidden = false;
    this->bIgnorePlayerDamageSource = false;
    this->OwnerActor = NULL;
    this->PossessionActor = NULL;
}

