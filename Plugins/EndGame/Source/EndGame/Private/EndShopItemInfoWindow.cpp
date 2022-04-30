#include "EndShopItemInfoWindow.h"

class UWidget;

FVector2D UEndShopItemInfoWindow::OnMeasureInfoListSize(int32 CellIndex) {
    return FVector2D{};
}

void UEndShopItemInfoWindow::OnMateriaInfoListSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

void UEndShopItemInfoWindow::OnCoreListSetupItem(UWidget* ItemWidget, int32 CellIndex) {
}

UEndShopItemInfoWindow::UEndShopItemInfoWindow() {
}

