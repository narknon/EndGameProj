#include "EndImageSet.h"

void UEndImageSet::SetSize(FVector2D InSize) {
}

void UEndImageSet::SetSimpleMode(bool bInSimpleMode) {
}

void UEndImageSet::SetSelectedIndex(int32 Index) {
}

void UEndImageSet::SetOpacity(float InOpacity) {
}

void UEndImageSet::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UEndImageSet::SetBlendMode(TEnumAsByte<EBlendMode> InBlendMode) {
}

UEndImageSet::UEndImageSet() {
    this->BlendMode = BLEND_Translucent;
    this->SelectedIndex = 0;
    this->bSimpleMode = false;
}

