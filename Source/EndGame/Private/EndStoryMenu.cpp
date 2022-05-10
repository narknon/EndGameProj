#include "EndStoryMenu.h"

class UWidget;

void UEndStoryMenu::OnLeftMenuSetupItem(UWidget* ItemWidget, int32 ItemIndex) {
}

void UEndStoryMenu::OnLeftMenuSelectedIndexChanged(int32 ItemIndex) {
}

void UEndStoryMenu::OnLeftMenuPressedItem(int32 ItemIndex) {
}

UEndStoryMenu::UEndStoryMenu() {
    this->CurrentAnimation = NULL;
}

