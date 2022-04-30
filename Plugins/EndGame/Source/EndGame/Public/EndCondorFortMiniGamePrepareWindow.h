#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndCondorFortMiniGamePrepareWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndCondorFortMiniGamePrepareWindow : public UEndUserWidget {
    GENERATED_BODY()
public:
    UEndCondorFortMiniGamePrepareWindow();
protected:
    UFUNCTION(BlueprintCallable)
    void OnClicked_Board(FName BoardID);
    
};

