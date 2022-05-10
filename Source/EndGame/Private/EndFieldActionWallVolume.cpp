#include "EndFieldActionWallVolume.h"
#include "Components/BoxComponent.h"

AEndFieldActionWallVolume::AEndFieldActionWallVolume() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
}

