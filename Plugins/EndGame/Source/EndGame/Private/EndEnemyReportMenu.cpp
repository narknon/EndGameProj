#include "EndEnemyReportMenu.h"

class UWidget;

void UEndEnemyReportMenu::OnStealListSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndEnemyReportMenu::OnResistanceListSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndEnemyReportMenu::OnResistanceIconListSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndEnemyReportMenu::OnRareDropItemListSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndEnemyReportMenu::OnEnemyListSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndEnemyReportMenu::OnEnemyListSelectedIndexChanged(int32 CellIndex) {
}

void UEndEnemyReportMenu::OnEnemyListPressedItem(int32 CellIndex) {
}

FVector2D UEndEnemyReportMenu::OnEnemyListMeasureItem(int32 CellIndex) {
    return FVector2D{};
}

void UEndEnemyReportMenu::OnDropItemListSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndEnemyReportMenu::OnDetailBattleLogListSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndEnemyReportMenu::OnDetailAreaListSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndEnemyReportMenu::OnDebuffIconSetup(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndEnemyReportMenu::OnBuffIconSetup(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndEnemyReportMenu::OnBattleLogListSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndEnemyReportMenu::OnAreaListSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndEnemyReportMenu::OnActionTypeListSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndEnemyReportMenu::OnAbilityListSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

UEndEnemyReportMenu::UEndEnemyReportMenu() {
    this->_DetailFlavorTipsDescriptionScrollBox = NULL;
    this->_DetailScrollTextBlock = NULL;
    this->DetailFadeInOutLenght = 1;
    this->CharacterDitherFadeInLenght = 1;
    this->RotationYMin = 1;
    this->RotationYMax = 1;
    this->RotationYDefault = 1;
    this->RotationXSpeed = 1;
    this->RotationYSpeed = 1;
}

