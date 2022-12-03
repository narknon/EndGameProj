#include "EndCategoryVolumeControlComponent.h"

void UEndCategoryVolumeControlComponent::UpdateCategoryVolume() {
}

void UEndCategoryVolumeControlComponent::TerminateCategoryVolume() {
}

void UEndCategoryVolumeControlComponent::InitializeCategoryVolume(const FName& TargetName) {
}

UEndCategoryVolumeControlComponent::UEndCategoryVolumeControlComponent() {
    this->Volume_Backup = 0.00f;
    this->Volume = 0.00f;
    this->FadeTime = 2.00f;
}

