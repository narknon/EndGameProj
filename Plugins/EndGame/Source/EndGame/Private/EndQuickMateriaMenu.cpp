#include "EndQuickMateriaMenu.h"

class UWidget;

void UEndQuickMateriaMenu::OnSummonMateriaSlotPressed() {
}

void UEndQuickMateriaMenu::OnSortListPressedItem(int32 CellIndex) {
}

void UEndQuickMateriaMenu::OnSlotPressed() {
}

void UEndQuickMateriaMenu::OnSlotIndexChanged() {
}

void UEndQuickMateriaMenu::OnMateriaMenuSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndQuickMateriaMenu::OnMateriaMenuSelectedIndexChanged(int32 CellIndex) {
}

void UEndQuickMateriaMenu::OnMateriaMenuPressedItem(int32 CellIndex) {
}

FVector2D UEndQuickMateriaMenu::OnMateriaMenuMeasureItem(int32 CellIndex) {
    return FVector2D{};
}

UEndQuickMateriaMenu::UEndQuickMateriaMenu() {
    this->list_0 = NULL;
    this->list_1 = NULL;
    this->list_2 = NULL;
    this->list_3 = NULL;
    this->EquipCell_Top = NULL;
    this->MateriaListMenu = NULL;
    this->Billboard_Materia = NULL;
    this->Billboard_CharaImg = NULL;
    this->SkillList = NULL;
    this->BtnPnl2 = NULL;
    this->BtnPnl3 = NULL;
    this->Txt_Btn3 = NULL;
    this->SortList = NULL;
}

