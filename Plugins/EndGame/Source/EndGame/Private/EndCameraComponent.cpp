#include "EndCameraComponent.h"

void UEndCameraComponent::SetRoll(float NewValue) {
}

void UEndCameraComponent::SetHorizontalAperture(float NewValue) {
}

void UEndCameraComponent::SetFocusDistance(float NewValue) {
}

void UEndCameraComponent::SetFocalLength(float NewValue) {
}

UEndCameraComponent::UEndCameraComponent() {
    this->FocalLength = 1;
    this->FocusDistance = 1;
    this->FilmWidth = 1;
    this->Roll = 1;
}

