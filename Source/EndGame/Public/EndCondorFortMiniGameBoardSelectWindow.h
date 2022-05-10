#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "EndCondorFortMiniGameBoardSelectWindow.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndCondorFortMiniGameBoardSelectWindow : public UEndUserWidget {
    GENERATED_BODY()
public:
    UEndCondorFortMiniGameBoardSelectWindow();
private:
    UFUNCTION(BlueprintCallable)
    void OnSetupItem_BoardList(UWidget* ItemWidget, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPressedItem_BoardList(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    FVector2D OnMeasureItem_Guage(int32 ItemIndex);
    
};

