#include "EndCategoryVolumeControlComponent.h"

void UEndCategoryVolumeControlComponent::UpdateCategoryVolume() {
}

void UEndCategoryVolumeControlComponent::TerminateCategoryVolume() {
}

void UEndCategoryVolumeControlComponent::InitializeCategoryVolume(const FName& TargetName) {
}

UEndCategoryVolumeControlComponent::UEndCategoryVolumeControlComponent() {
    this->Volume_Backup = 1;
    this->Volume = 1;
    this->FadeTime = 1;
}

