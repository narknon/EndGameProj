#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndCondorFortMiniGameUnitItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndCondorFortMiniGameUnitItem : public UEndUserWidget {
    GENERATED_BODY()
public:
    UEndCondorFortMiniGameUnitItem();
protected:
    UFUNCTION(BlueprintCallable)
    void OnButtonUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonHovered();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
};

