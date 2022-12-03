#include "EndBorder.h"

class UTexture2D;
class USlateBrushAsset;
class UMaterialInterface;
class UMaterialInstanceDynamic;

void UEndBorder::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UEndBorder::SetPadding(FMargin InPadding) {
}

void UEndBorder::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

void UEndBorder::SetDesiredSizeScale(FVector2D InScale) {
}

void UEndBorder::SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity) {
}

void UEndBorder::SetBrushFromTexture(UTexture2D* Texture) {
}

void UEndBorder::SetBrushFromMaterial(UMaterialInterface* Material) {
}

void UEndBorder::SetBrushFromAsset(USlateBrushAsset* Asset) {
}

void UEndBorder::SetBrushColor(FLinearColor InBrushColor) {
}

void UEndBorder::SetBrush(const FSlateBrush& InBrush) {
}

UMaterialInstanceDynamic* UEndBorder::GetDynamicMaterial() {
    return NULL;
}

UEndBorder::UEndBorder() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
    this->bShowEffectWhenDisabled = true;
}

