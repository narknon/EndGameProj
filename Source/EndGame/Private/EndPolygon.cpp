#include "EndPolygon.h"

class USlateBrushAsset;
class UMaterialInstanceDynamic;
class UTexture2DDynamic;
class UTexture2D;
class UMaterialInterface;

void UEndPolygon::SetOpacity(float InOpacity) {
}

void UEndPolygon::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UEndPolygon::SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize) {
}

void UEndPolygon::SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize) {
}

void UEndPolygon::SetBrushFromMaterial(UMaterialInterface* Material) {
}

void UEndPolygon::SetBrushFromAsset(USlateBrushAsset* Asset) {
}

void UEndPolygon::SetBrush(const FSlateBrush& InBrush) {
}

void UEndPolygon::SetBlendMode(TEnumAsByte<EBlendMode> InBlendMode) {
}

UMaterialInstanceDynamic* UEndPolygon::GetDynamicMaterial() {
    return NULL;
}

UEndPolygon::UEndPolygon() {
    this->BlendMode = BLEND_Translucent;
}

