#pragma once
#include "CoreMinimal.h"
#include "EndSimpleMenu.h"
#include "EndTrialOrderWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndTrialOrderWindow : public UEndSimpleMenu {
    GENERATED_BODY()
public:
    UEndTrialOrderWindow();
private:
    UFUNCTION(BlueprintCallable)
    void BtnNormalOnClicked();
    
    UFUNCTION(BlueprintCallable)
    void BtnDeluxeOnClicked();
    
};

