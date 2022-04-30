#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "EndCondorFortMiniGameTopWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndCondorFortMiniGameTopWindow : public UEndUserWidget {
    GENERATED_BODY()
public:
    UEndCondorFortMiniGameTopWindow();
private:
    UFUNCTION(BlueprintCallable)
    FVector2D OnMeasureStatusItemPlayer(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    FVector2D OnMeasureStatusItemEnemy(int32 ItemIndex);
    
};

