#include "EndMainSaveLoadTopMenu.h"

class UWidget;

void UEndMainSaveLoadTopMenu::OnLeftMenuSetupItem(UWidget* ItemWidget, int32 ItemIndex) {
}

void UEndMainSaveLoadTopMenu::OnLeftMenuPressedItem(int32 ItemIndex) {
}

UEndMainSaveLoadTopMenu::UEndMainSaveLoadTopMenu() {
    this->SaveLoadMenuWidgetClass = NULL;
    this->Throbber = NULL;
}

