#include "EndTiledImage.h"

class USlateBrushAsset;
class UMaterialInstanceDynamic;
class UTexture2DDynamic;
class UTexture2D;
class UMaterialInterface;

void UEndTiledImage::SetOpacity(float InOpacity) {
}

void UEndTiledImage::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UEndTiledImage::SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize) {
}

void UEndTiledImage::SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize) {
}

void UEndTiledImage::SetBrushFromMaterial(UMaterialInterface* Material) {
}

void UEndTiledImage::SetBrushFromAsset(USlateBrushAsset* Asset) {
}

void UEndTiledImage::SetBrush(const FSlateBrush& InBrush) {
}

void UEndTiledImage::SetBlendMode(TEnumAsByte<EBlendMode> InBlendMode) {
}

UMaterialInstanceDynamic* UEndTiledImage::GetDynamicMaterial() {
    return NULL;
}

UEndTiledImage::UEndTiledImage() {
    this->HorizontalCount = 1;
    this->VerticalCount = 1;
    this->BlendMode = BLEND_Translucent;
}

