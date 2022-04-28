#include "EndListBox.h"

class UWidget;

void UEndListBox::SetSelectedIndex(int32 UserIndex, int32 SlotIndex) {
}

void UEndListBox::SetPadding(FMargin InPadding) {
}

void UEndListBox::SetItemCount(int32 InItemCount) {
}

void UEndListBox::SetDesiredCount(int32 InDesiredCount) {
}

void UEndListBox::RefreshItems() {
}

void UEndListBox::RefreshItem(int32 Index) {
}

int32 UEndListBox::GetSelectedIndex(int32 UserIndex) const {
    return 0;
}

UWidget* UEndListBox::GetChildAt(int32 Index) const {
    return NULL;
}

UEndListBox::UEndListBox() {
    this->Orientation = Orient_Vertical;
    this->ContentClass = NULL;
    this->ItemCount = 0.00f;
    this->DesiredCount = 0.00f;
}

