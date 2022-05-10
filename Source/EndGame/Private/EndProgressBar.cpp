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
    this->Percent = 1;
    this->PreviewPercent = 1;
    this->BarFillType = EProgressBarFillType::LeftToRight;
}

