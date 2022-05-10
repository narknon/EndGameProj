#include "EndSortWindow.h"

class UWidget;

void UEndSortWindow::OnSortListSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndSortWindow::OnSortListPressedItem(int32 CellIndex) {
}

UEndSortWindow::UEndSortWindow() {
    this->Options = NULL;
    this->Txt_Btn = NULL;
    this->Sort_EquipMark = NULL;
}

