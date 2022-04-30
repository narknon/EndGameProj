#include "EndMainManualMenu.h"

class UWidget;

void UEndMainManualMenu::OnLeftMenuSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndMainManualMenu::OnLeftMenuSelectedIndexChanged(int32 CellIndex) {
}

void UEndMainManualMenu::OnLeftMenuPressedItem(int32 CellIndex) {
}

UEndMainManualMenu::UEndMainManualMenu() {
    this->LeftMenu = NULL;
    this->Detail = NULL;
    this->Txt_Category_Title = NULL;
    this->Txt_Detail_Title = NULL;
    this->Title_Icon = NULL;
    this->DetailScrollBox = NULL;
    this->Billboard_CategoryImg = NULL;
}

