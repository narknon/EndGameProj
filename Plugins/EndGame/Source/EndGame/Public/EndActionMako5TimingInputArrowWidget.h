#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndActionMako5TimingInputArrowWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndActionMako5TimingInputArrowWidget : public UEndUserWidget {
    GENERATED_BODY()
public:
    UEndActionMako5TimingInputArrowWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnInAnimationFinished();
    
};

