#include "EndNaviMapIcon.h"

void UEndNaviMapIcon::SetDistance(float InDistance) {
}

UEndNaviMapIcon::UEndNaviMapIcon() {
    this->ArrowDirection = ENaviMapIconDirection::None;
    this->bAlwaysShowDistance = false;
    this->bSecretDistance = false;
    this->bHideDistance = false;
    this->bInsideArea = false;
    this->CachedDistanceTextBlock = NULL;
}

