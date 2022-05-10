#include "EndBillboard.h"

void UEndBillboard::SetOpacity(float InOpacity) {
}

void UEndBillboard::SetImagePath(FSoftObjectPath InImagePath, bool bInRewind) {
}

void UEndBillboard::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UEndBillboard::SetBlendMode(TEnumAsByte<EBlendMode> InBlendMode) {
}

UEndBillboard::UEndBillboard() {
    this->DrawAs = ESlateBrushDrawType::Image;
    this->Tiling = ESlateBrushTileType::NoTile;
    this->BlendMode = BLEND_Translucent;
    this->Throbber = NULL;
}

