#include "EndFieldActionActorWireMeshMoveChild.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorWireMeshMoveChild::AEndFieldActionActorWireMeshMoveChild() {
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
}

