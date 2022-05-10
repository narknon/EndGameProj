#pragma once
#include "CoreMinimal.h"
#include "EndColosseumMenuWindow.h"
#include "EndColosseumBattleSelectWindow.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndColosseumBattleSelectWindow : public UEndColosseumMenuWindow {
    GENERATED_BODY()
public:
    UEndColosseumBattleSelectWindow();
private:
    UFUNCTION(BlueprintCallable)
    void OnBattleListSetupItem(UWidget* ItemWidget, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBattleListPressedItem(int32 ItemIndex);
    
};

