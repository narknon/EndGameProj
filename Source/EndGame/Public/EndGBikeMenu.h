#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndGBikeMenu.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndGBikeMenu : public UEndUserWidget {
    GENERATED_BODY()
public:
    UEndGBikeMenu();
    UFUNCTION(BlueprintCallable)
    void OnGBikeCellSetup(UWidget* ItemWidget, int32 ItemIndex);
    
};

