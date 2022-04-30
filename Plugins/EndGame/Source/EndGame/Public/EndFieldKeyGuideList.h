#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndFieldKeyGuideList.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndFieldKeyGuideList : public UEndUserWidget {
    GENERATED_BODY()
public:
    UEndFieldKeyGuideList();
    UFUNCTION(BlueprintCallable)
    void OnCommandCellSetupPlayFeel(UWidget* ItemWidget, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCommandCellSetupGBike(UWidget* ItemWidget, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCommandCellSetupField(UWidget* ItemWidget, int32 ItemIndex);
    
};

