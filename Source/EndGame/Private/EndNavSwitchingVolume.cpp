#include "EndNavSwitchingVolume.h"

AEndNavSwitchingVolume::AEndNavSwitchingVolume(const FObjectInitializer& ObjectInitializer) : AEndNavModifierVolumeBase(ObjectInitializer){
    this->CollisionProfileType = ECollisionProfileType::Wall;
}

