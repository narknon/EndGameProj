#include "EndNaviMap.h"

void UEndNaviMap::SetPosition3D(const FVector& InPos) {
}

FVector2D UEndNaviMap::ConvertToPosition2D(const FVector& InPos) {
    return FVector2D{};
}

UEndNaviMap::UEndNaviMap() {
    this->PixelPerCm = 0.08f;
    this->PrototypeData = NULL;
    this->PrototypeDataV2 = NULL;
    this->MaskTexture = NULL;
}

