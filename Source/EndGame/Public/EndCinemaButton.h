#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndCinemaButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndCinemaButton : public UEndUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SkipWaitTime;
    
    UPROPERTY(EditAnywhere)
    float MenuWaitTime;
    
    UPROPERTY(EditAnywhere)
    float MenuOutTime;
    
    UEndCinemaButton();
};

