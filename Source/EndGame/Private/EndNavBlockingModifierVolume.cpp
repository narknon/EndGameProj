#include "EndNavBlockingModifierVolume.h"

AEndNavBlockingModifierVolume::AEndNavBlockingModifierVolume() {
    this->IsFirstStart = true;
    this->NavAreaType = EEndNavAreaType::Impassable;
}

