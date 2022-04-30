#include "EndLoadingScreen.h"

class UWidget;

void UEndLoadingScreen::OnTipListSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndLoadingScreen::OnTipListSelectedIndexChanged(int32 CellIndex) {
}

UEndLoadingScreen::UEndLoadingScreen() {
    this->Img_BG = NULL;
    this->StoneBox = NULL;
    this->Txt_TipsTitle = NULL;
    this->Txt_Info = NULL;
    this->Txt_Goto = NULL;
    this->Txt_Category = NULL;
    this->Billboard_QuestThumbnail = NULL;
    this->Txt_QuestStep = NULL;
}

