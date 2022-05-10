#include "EndVirtualScrollBox.h"

class UWidget;

void UEndVirtualScrollBox::SetSupportsPageScroll(bool bInSupportsPageScroll) {
}

void UEndVirtualScrollBox::SetSupportsKeyDown(bool bInSupportsKeyDown) {
}

void UEndVirtualScrollBox::SetSelectedIndexWithCause(int32 UserIndex, int32 SlotIndex, EFocusCause FocusCause, bool InAnimateScroll, bool ForceCallback, UWidget* InRootWidget) {
}

void UEndVirtualScrollBox::SetSelectedIndex(int32 UserIndex, int32 SlotIndex, bool InAnimateScroll, bool ForceCallback, UWidget* InRootWidget) {
}

void UEndVirtualScrollBox::SetScrollOffset(float NewScrollOffset) {
}

void UEndVirtualScrollBox::SetScrollBarPosition(EEndMenuScrollBarPosition InScrollBarPosition) {
}

void UEndVirtualScrollBox::SetPadding(FMargin InPadding) {
}

void UEndVirtualScrollBox::SetItemCount(int32 InItemCount) {
}

void UEndVirtualScrollBox::SetHasVariableSizeItem(bool bInVariableSizeItem) {
}

void UEndVirtualScrollBox::SetDesiredCount(int32 InDesiredCount) {
}

void UEndVirtualScrollBox::SetCursorBoundsExtension(FMargin InCursorBoundsExtension) {
}

void UEndVirtualScrollBox::SetCullingBoundsExtension(FMargin InCullingBoundsExtension) {
}

void UEndVirtualScrollBox::ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll) {
}

void UEndVirtualScrollBox::ScrollToStart() {
}

void UEndVirtualScrollBox::ScrollToEnd() {
}

void UEndVirtualScrollBox::RefreshItems() {
}

void UEndVirtualScrollBox::RefreshItem(int32 Index) {
}

int32 UEndVirtualScrollBox::GetSelectedIndex(int32 UserIndex) const {
    return 0;
}

float UEndVirtualScrollBox::GetScrollOffset() const {
    return 0.0f;
}

ESlateVisibility UEndVirtualScrollBox::GetScrollBarVisibility() const {
    return ESlateVisibility::Visible;
}

float UEndVirtualScrollBox::GetMaxScrollOffset() const {
    return 0.0f;
}

UWidget* UEndVirtualScrollBox::GetCursorWidget() const {
    return NULL;
}

UWidget* UEndVirtualScrollBox::GetChildAt(int32 Index) const {
    return NULL;
}

UEndVirtualScrollBox::UEndVirtualScrollBox() {
    this->Orientation = Orient_Vertical;
    this->ScrollBarVisibility = ESlateVisibility::Visible;
    this->AlwaysShowScrollbar = false;
    this->ScrollBarPosition = EEndMenuScrollBarPosition::None;
    this->SupportsPageScroll = false;
    this->SupportsKeyDown = false;
    this->VariableSizeItem = false;
    this->ContentClass = NULL;
    this->CursorClass = NULL;
    this->ItemCount = 0;
    this->DesiredCount = 0;
    this->CursorWidget = NULL;
    this->CachedCursor = NULL;
}

