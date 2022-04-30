#include "EndPathWayBoxActor.h"
#include "Components/BoxComponent.h"
#include "EndNavModifierComponent.h"

AEndPathWayBoxActor::AEndPathWayBoxActor() {
    this->PathWayBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("PathWayBoxComponent"));
    this->PathWayModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("PathWayModifier"));
}

