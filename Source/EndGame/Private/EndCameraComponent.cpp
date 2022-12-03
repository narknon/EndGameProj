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
    this->FocalLength = 0.00f;
    this->FocusDistance = 0.00f;
    this->FilmWidth = 0.00f;
    this->Roll = 0.00f;
}

