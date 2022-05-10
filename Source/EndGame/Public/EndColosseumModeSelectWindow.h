#pragma once
#include "CoreMinimal.h"
#include "EndColosseumMenuWindow.h"
#include "EndColosseumModeSelectWindow.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndColosseumModeSelectWindow : public UEndColosseumMenuWindow {
    GENERATED_BODY()
public:
    UEndColosseumModeSelectWindow();
private:
    UFUNCTION(BlueprintCallable)
    void OnModeListSetupItem(UWidget* ItemWidget, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnModeListPressedItem(int32 ItemIndex);
    
};

