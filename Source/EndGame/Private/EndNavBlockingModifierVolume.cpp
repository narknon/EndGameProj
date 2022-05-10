#include "EndNavBlockingModifierVolume.h"

AEndNavBlockingModifierVolume::AEndNavBlockingModifierVolume(const FObjectInitializer& ObjectInitializer) : AEndNavSwitchingVolume(ObjectInitializer) {
    this->IsFirstStart = true;
    this->NavAreaType = EEndNavAreaType::NullArea;
}

