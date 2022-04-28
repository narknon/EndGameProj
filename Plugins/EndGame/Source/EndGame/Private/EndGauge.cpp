#include "EndGauge.h"

void UEndGauge::SetValue(float InValue) {
}

void UEndGauge::SetPreviewValue(float InPreviewValue) {
}

void UEndGauge::SetPreviewColorAndOpacity(FLinearColor InColor) {
}

void UEndGauge::SetMaxValue(float InMaxValue) {
}

void UEndGauge::SetFillEndColorAndOpacity(FLinearColor InColor) {
}

void UEndGauge::SetFillColorAndOpacity(FLinearColor InColor) {
}

UEndGauge::UEndGauge() {
    this->Value = 1;
    this->PreviewValue = 1;
    this->MaxValue = 1;
    this->BarFillType = EProgressBarFillType::LeftToRight;
}

