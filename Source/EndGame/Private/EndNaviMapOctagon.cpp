#include "EndNaviMapOctagon.h"

void UEndNaviMapOctagon::SetPosition3D(const FVector& InPos) {
}

FVector2D UEndNaviMapOctagon::ConvertToPosition2D(const FVector& InPos) {
    return FVector2D{};
}

UEndNaviMapOctagon::UEndNaviMapOctagon() {
    this->PixelPerCm = 0.08f;
    this->PrototypeData = NULL;
    this->PrototypeDataV2 = NULL;
    this->RenderTexture = NULL;
    this->MaskTexture = NULL;
}

