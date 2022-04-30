#include "EndShopMenu.h"

class UWidget;

void UEndShopMenu::OnShopListCellSetup(UWidget* ItemWidget, int32 ItemIndex) {
}

void UEndShopMenu::OnShopListCellCliked() {
}

void UEndShopMenu::OnShopDefaultCellSetup(UWidget* ItemWidget, int32 ItemIndex) {
}

void UEndShopMenu::OnShopChadolyCellSetup(UWidget* ItemWidget, int32 ItemIndex) {
}

UEndShopMenu::UEndShopMenu() {
    this->_SelectNumberSpan = 1;
}

