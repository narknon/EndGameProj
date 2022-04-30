#include "EndAerialIgnoreVolume.h"
#include "EndAerialIgnoreComponent.h"

AEndAerialIgnoreVolume::AEndAerialIgnoreVolume() {
    this->AerialIgnoreComponent = CreateDefaultSubobject<UEndAerialIgnoreComponent>(TEXT("EndAerialIgnoreComponent"));
}

