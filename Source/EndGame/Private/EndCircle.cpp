#include "EndCircle.h"

class UMaterialInterface;
class UMaterialInstanceDynamic;
class UTexture2DDynamic;
class UTexture2D;
class USlateBrushAsset;

void UEndCircle::SetStartAngle(float InAngle) {
}

void UEndCircle::SetRadius(float InRadius) {
}

void UEndCircle::SetOpacity(float InOpacity) {
}

void UEndCircle::SetNumSides(int32 InNumSides) {
}

void UEndCircle::SetEndAngle(float InAngle) {
}

void UEndCircle::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UEndCircle::SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize) {
}

void UEndCircle::SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize) {
}

void UEndCircle::SetBrushFromMaterial(UMaterialInterface* Material) {
}

void UEndCircle::SetBrushFromAsset(USlateBrushAsset* Asset) {
}

void UEndCircle::SetBrush(const FSlateBrush& InBrush) {
}

void UEndCircle::SetBlendMode(TEnumAsByte<EBlendMode> InBlendMode) {
}

UMaterialInstanceDynamic* UEndCircle::GetDynamicMaterial() {
    return NULL;
}

UEndCircle::UEndCircle() {
    this->BlendMode = BLEND_Translucent;
    this->Radius = 1;
    this->NumSides = 0;
    this->StartAngle = 1;
    this->EndAngle = 1;
}

