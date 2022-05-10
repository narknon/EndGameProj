#include "EndInvalidationBox.h"

void UEndInvalidationBox::SetCanCache(bool CanCache) {
}

void UEndInvalidationBox::InvalidateCache() {
}

bool UEndInvalidationBox::GetCanCache() const {
    return false;
}

UEndInvalidationBox::UEndInvalidationBox() {
    this->bCanCache = true;
    this->CacheRelativeTransforms = false;
}

