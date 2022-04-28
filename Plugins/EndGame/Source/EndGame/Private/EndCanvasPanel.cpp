#include "EndCanvasPanel.h"

class UWidget;
class UEndCanvasPanelSlot;

void UEndCanvasPanel::SetProjectionMode(TEnumAsByte<ECameraProjectionMode::Type> InProjectionMode) {
}

void UEndCanvasPanel::SetFieldOfView(float InFieldOfView) {
}

void UEndCanvasPanel::SetExplicitChildZOrder(bool bInExplicitChildZOrder) {
}

void UEndCanvasPanel::SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity) {
}

UEndCanvasPanelSlot* UEndCanvasPanel::AddChildToCanvas(UWidget* Content) {
    return NULL;
}

UEndCanvasPanel::UEndCanvasPanel() {
    this->bExplicitChildZOrder = false;
    this->ProjectionMode = ECameraProjectionMode::Orthographic;
    this->FieldOfView = 1;
}

