#include "EndSimpleWallActor.h"
#include "Components/StaticMeshComponent.h"

AEndSimpleWallActor::AEndSimpleWallActor() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

