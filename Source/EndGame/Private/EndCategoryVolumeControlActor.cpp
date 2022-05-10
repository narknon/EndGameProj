#include "EndCategoryVolumeControlActor.h"
#include "EndCategoryVolumeControlComponent.h"

void AEndCategoryVolumeControlActor::UpdateCategoryVolumeComponent() {
}

UEndCategoryVolumeControlComponent* AEndCategoryVolumeControlActor::GetControllerComponent() const {
    return NULL;
}

AEndCategoryVolumeControlActor::AEndCategoryVolumeControlActor() {
    this->ControllerComponent = CreateDefaultSubobject<UEndCategoryVolumeControlComponent>(TEXT("EndCategoryVolumeControlComponent"));
}

