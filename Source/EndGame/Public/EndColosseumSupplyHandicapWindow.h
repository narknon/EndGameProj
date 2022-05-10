#pragma once
#include "CoreMinimal.h"
#include "EndColosseumMenuWindow.h"
#include "EndColosseumSupplyHandicapWindow.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndColosseumSupplyHandicapWindow : public UEndColosseumMenuWindow {
    GENERATED_BODY()
public:
    UEndColosseumSupplyHandicapWindow();
private:
    UFUNCTION(BlueprintCallable)
    void OnCommandListSetupItem(UWidget* ItemWidget, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCommandListPressedItem(int32 ItemIndex);
    
};

