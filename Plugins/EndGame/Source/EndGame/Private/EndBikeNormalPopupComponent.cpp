#include "EndBikeNormalPopupComponent.h"
#include "EndBikePopupComponent.h"

UEndBikeNormalPopupComponent::UEndBikeNormalPopupComponent() {
    this->pPopupComponent = CreateDefaultSubobject<UEndBikePopupComponent>(TEXT("Popup"));
}

