#include "EndProgressBar.h"

void UEndProgressBar::SetPreviewPercent(float InPercent) {
}

void UEndProgressBar::SetPreviewColorAndOpacity(FLinearColor InColor) {
}

void UEndProgressBar::SetPercent(float InPercent) {
}

void UEndProgressBar::SetFillColorAndOpacity(FLinearColor InColor) {
}

UEndProgressBar::UEndProgressBar() {
    this->Percent = 0.00f;
    this->PreviewPercent = 0.00f;
    this->BarFillType = EProgressBarFillType::LeftToRight;
}

