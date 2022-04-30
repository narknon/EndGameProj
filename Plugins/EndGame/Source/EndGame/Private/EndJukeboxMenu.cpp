#include "EndJukeboxMenu.h"

class UWidget;

void UEndJukeboxMenu::OnSoundListSetupItem(UWidget* ItemWidget, int32 ItemIndex) {
}

void UEndJukeboxMenu::OnSoundListSelectedIndexChanged(int32 ItemIndex) {
}

void UEndJukeboxMenu::OnSoundListPressedItem(int32 ItemIndex) {
}

UEndJukeboxMenu::UEndJukeboxMenu() {
    this->CoverBillboard = NULL;
    this->PlayingAnimation = NULL;
}

