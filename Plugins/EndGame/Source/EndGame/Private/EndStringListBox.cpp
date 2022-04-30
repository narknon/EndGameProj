#include "EndStringListBox.h"

void UEndStringListBox::SetItems(const TArray<FString>& InItems) {
}

void UEndStringListBox::SetDesiredCount(int32 InDesiredCount) {
}

int32 UEndStringListBox::GetSelectedIndex(int32 UserIndex) const {
    return 0;
}

UEndStringListBox::UEndStringListBox() {
    this->Orientation = Orient_Vertical;
    this->ContentClass = NULL;
    this->DesiredCount = 0;
}

