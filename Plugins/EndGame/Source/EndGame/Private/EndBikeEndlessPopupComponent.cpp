#include "EndBikeEndlessPopupComponent.h"
#include "EndBikePopupComponent.h"

UEndBikeEndlessPopupComponent::UEndBikeEndlessPopupComponent() {
    this->pPopupComponent = CreateDefaultSubobject<UEndBikePopupComponent>(TEXT("Popup_Default__EndBikeEndlessPopupComponent"));
}

