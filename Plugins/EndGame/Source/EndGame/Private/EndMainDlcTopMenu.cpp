#include "EndMainDlcTopMenu.h"

class UWidget;

void UEndMainDlcTopMenu::OnSetupItemInternal(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndMainDlcTopMenu::OnSelectedIndexChangedInternal(int32 CellIndex) {
}

void UEndMainDlcTopMenu::OnPressedItemInternal(int32 CellIndex) {
}

UEndMainDlcTopMenu::UEndMainDlcTopMenu() {
    this->All_Dlc = NULL;
    this->ReportList = NULL;
    this->Billboard_Img = NULL;
    this->DlcInfo = NULL;
}

