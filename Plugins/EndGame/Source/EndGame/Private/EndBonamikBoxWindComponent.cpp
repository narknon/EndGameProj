#include "EndBonamikBoxWindComponent.h"

bool UEndBonamikBoxWindComponent::IsActive() const {
    return false;
}

UEndBonamikBoxWindComponent::UEndBonamikBoxWindComponent() {
    this->AreaMargin = 1;
    this->BonamikWind = NULL;
}

