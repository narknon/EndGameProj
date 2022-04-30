#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndCondorFortMinigameEditMenu.generated.h"

class UWidget;
class UEndCondorFortMiniGameUnitItem;

UCLASS(Blueprintable, EditInlineNew)
class UEndCondorFortMinigameEditMenu : public UEndUserWidget {
    GENERATED_BODY()
public:
    UEndCondorFortMinigameEditMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void OnSetup_UnitListCell(UWidget* ItemWidget, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClicked_UnitSwap(UEndCondorFortMiniGameUnitItem* UnitItem);
    
    UFUNCTION(BlueprintCallable)
    void OnClicked_UnitSelect(UEndCondorFortMiniGameUnitItem* UnitItem);
    
    UFUNCTION(BlueprintCallable)
    void OnClicked_Board(FName BoardID);
    
};

