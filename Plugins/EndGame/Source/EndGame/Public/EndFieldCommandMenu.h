#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndFieldCommandMenu.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndFieldCommandMenu : public UEndUserWidget {
    GENERATED_BODY()
public:
    UEndFieldCommandMenu();
    UFUNCTION(BlueprintCallable)
    void OnPressedItem(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCommandCellSetup(UWidget* ItemWidget, int32 ItemIndex);
    
};

