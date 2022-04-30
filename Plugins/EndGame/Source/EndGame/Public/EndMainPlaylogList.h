#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndMainPlaylogList.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndMainPlaylogList : public UEndUserWidget {
    GENERATED_BODY()
public:
    UEndMainPlaylogList();
private:
    UFUNCTION(BlueprintCallable)
    void OnLogListSetupItem(UWidget* ItemWidget, int32 ItemIndex);
    
};

