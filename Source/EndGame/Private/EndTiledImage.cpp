#include "EndTiledImage.h"

class UMaterialInterface;
class UMaterialInstanceDynamic;
class UTexture2DDynamic;
class UTexture2D;
class USlateBrushAsset;

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
    this->HorizontalCount = 0;
    this->VerticalCount = 0;
    this->BlendMode = BLEND_Translucent;
}

