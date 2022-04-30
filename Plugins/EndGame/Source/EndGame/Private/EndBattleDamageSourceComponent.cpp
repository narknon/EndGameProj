#include "EndBattleDamageSourceComponent.h"

FVector UEndBattleDamageSourceComponent::GetDir() const {
    return FVector{};
}

UEndBattleDamageSourceComponent::UEndBattleDamageSourceComponent() {
    this->PushCollisionActor = NULL;
}

