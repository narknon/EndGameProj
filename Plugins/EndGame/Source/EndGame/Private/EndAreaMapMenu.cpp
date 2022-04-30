#include "EndAreaMapMenu.h"

class UWidget;

void UEndAreaMapMenu::OnStoryListBoxSetupItem(UWidget* ItemWidget, int32 ItemIndex) {
}

void UEndAreaMapMenu::OnLeftMenuSetupItem(UWidget* ItemWidget, int32 ItemIndex) {
}

void UEndAreaMapMenu::OnLeftMenuSelectedIndexChanged(int32 ItemIndex) {
}

UEndAreaMapMenu::UEndAreaMapMenu() {
    this->AreaEffectWidgetClass = NULL;
    this->NaviMap = NULL;
    this->NaviCursor = NULL;
    this->TargetIcon = NULL;
    this->TargetButton = NULL;
    this->CircleCanvas = NULL;
    this->InfoWindow = NULL;
    this->BlockFrame = NULL;
    this->BlockCaption = NULL;
    this->PlayerPosIndicator = NULL;
    this->TargetPosIndicator = NULL;
    this->CurrentAnimation = NULL;
}

