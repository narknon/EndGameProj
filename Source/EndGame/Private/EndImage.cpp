#include "EndImage.h"

class USlateBrushAsset;
class UMaterialInstanceDynamic;
class UTexture2DDynamic;
class UTexture2D;
class UMaterialInterface;

void UEndImage::SetOpacity(float InOpacity) {
}

void UEndImage::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UEndImage::SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize) {
}

void UEndImage::SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize) {
}

void UEndImage::SetBrushFromMaterial(UMaterialInterface* Material) {
}

void UEndImage::SetBrushFromAsset(USlateBrushAsset* Asset) {
}

void UEndImage::SetBrush(const FSlateBrush& InBrush) {
}

void UEndImage::SetBlendMode(TEnumAsByte<EBlendMode> InBlendMode) {
}

UMaterialInstanceDynamic* UEndImage::GetDynamicMaterial() {
    return NULL;
}

UEndImage::UEndImage() {
    this->BlendMode = BLEND_Translucent;
}

