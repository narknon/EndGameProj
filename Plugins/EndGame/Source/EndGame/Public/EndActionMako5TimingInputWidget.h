#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndActionMako5TimingInputWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndActionMako5TimingInputWidget : public UEndUserWidget {
    GENERATED_BODY()
public:
    UEndActionMako5TimingInputWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnMainGuideAnimationFinished();
    
};

