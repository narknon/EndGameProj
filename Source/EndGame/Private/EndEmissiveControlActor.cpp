#include "EndEmissiveControlActor.h"
#include "EndEmissiveControlComponent.h"

void AEndEmissiveControlActor::UpdateControllerComponent() {
}

UEndEmissiveControlComponent* AEndEmissiveControlActor::GetControllerComponent() const {
    return NULL;
}

AEndEmissiveControlActor::AEndEmissiveControlActor() {
    this->ControllerComponent = CreateDefaultSubobject<UEndEmissiveControlComponent>(TEXT("EndEmissiveControlComponent"));
}

