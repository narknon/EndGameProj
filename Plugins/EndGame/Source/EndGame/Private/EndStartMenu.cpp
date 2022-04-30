#include "EndStartMenu.h"

class UWidget;
class UUserWidget;

void UEndStartMenu::OnSaveDataSetupItem(UWidget* ItemWidget, int32 ItemIndex) {
}

void UEndStartMenu::OnSaveDataSelectedIndexChanged(int32 ItemIndex) {
}

void UEndStartMenu::OnSaveDataPressedItem(int32 ItemIndex) {
}

void UEndStartMenu::OnSaveDataClicked(UUserWidget* Cell) {
}

void UEndStartMenu::OnSaveDataCancelled() {
}

void UEndStartMenu::OnQuitGame() {
}

void UEndStartMenu::OnOptions() {
}

void UEndStartMenu::OnNewGame() {
}

void UEndStartMenu::OnMembershipUpdate() {
}

void UEndStartMenu::OnLoadLatest() {
}

void UEndStartMenu::OnLoadGame() {
}

void UEndStartMenu::OnListMenuSetupItem(UWidget* ItemWidget, int32 ItemIndex) {
}

void UEndStartMenu::OnListMenuSelectedIndexChanged(int32 ItemIndex) {
}

void UEndStartMenu::OnListMenuPressedItem(int32 ItemIndex) {
}

UEndStartMenu::UEndStartMenu() {
    this->LoadMenuWidgetClass = NULL;
    this->OptionsMenuWidgetClass = NULL;
    this->DlcWindowWidgetClass = NULL;
    this->MembershipWindowWidgetClass = NULL;
    this->ButtonAnimationStartTime = 1;
    this->ButtonAnimationDelay = 1;
    this->Throbber = NULL;
    this->CachedLoadMenu = NULL;
    this->MainMenu = NULL;
    this->OptionsMenu = NULL;
}

