#include "EndBonamikBoxWindComponent.h"

bool UEndBonamikBoxWindComponent::IsActive() const {
    return false;
}

UEndBonamikBoxWindComponent::UEndBonamikBoxWindComponent() {
    this->AreaMargin = 0.00f;
    this->BonamikWind = NULL;
}

