#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "EndCondorFortMiniGameInfoWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndCondorFortMiniGameInfoWindow : public UEndUserWidget {
    GENERATED_BODY()
public:
    UEndCondorFortMiniGameInfoWindow();
private:
    UFUNCTION(BlueprintCallable)
    FVector2D OnMeasureItem_Guage(int32 ItemIndex);
    
};

