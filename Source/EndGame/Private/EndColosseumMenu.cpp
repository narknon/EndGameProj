#include "EndColosseumMenu.h"

class UWidget;

void UEndColosseumMenu::OnYesButtonPressed() {
}

void UEndColosseumMenu::OnNoButtonPressed() {
}

void UEndColosseumMenu::OnDifficultySelectMenuSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndColosseumMenu::OnDifficultySelectMenuSelectedIndexChanged(int32 CellIndex) {
}

void UEndColosseumMenu::OnDifficultySelectMenuPressedItem(int32 CellIndex) {
}

void UEndColosseumMenu::OnCourseMenuSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndColosseumMenu::OnCourseMenuSelectedIndexChanged(int32 CellIndex) {
}

void UEndColosseumMenu::OnCourseMenuPressedItem(int32 CellIndex) {
}

void UEndColosseumMenu::OnCharaSelectMenuSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndColosseumMenu::OnCharaSelectMenuPressedItem(int32 CellIndex) {
}

void UEndColosseumMenu::OnBattleInfoWindowSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

FVector2D UEndColosseumMenu::OnBattleInfoWindowMeasureItem(int32 ItemIndex) {
    return FVector2D{};
}

UEndColosseumMenu::UEndColosseumMenu() {
    this->Txt_Btn = NULL;
    this->Icon_Giru = NULL;
    this->Txt_Giru = NULL;
    this->Txt_ListTitle1 = NULL;
    this->Txt_ListTitle2 = NULL;
    this->Txt_ListTitle3 = NULL;
    this->Info2_ScrollList = NULL;
    this->Txt_TitleColiseum = NULL;
    this->Txt_TitleCourse = NULL;
    this->Txt_Difficulty = NULL;
    this->Txt_SelectInfo1 = NULL;
    this->Txt_SelectInfo2 = NULL;
    this->LeftMenu_ScrollBox = NULL;
    this->Chara1 = NULL;
    this->Chara2 = NULL;
    this->Chara3 = NULL;
    this->Pnl_Leader = NULL;
    this->Txt_BattleLeader = NULL;
    this->Pnl_CharaList = NULL;
    this->CharaNum1 = NULL;
    this->CharaNum2 = NULL;
    this->CharaNum3 = NULL;
    this->LightB1 = NULL;
    this->LightB2 = NULL;
    this->LightB3 = NULL;
    this->ConfirmWindow = NULL;
    this->InfoWindow = NULL;
    this->DifficultyWindow = NULL;
}

