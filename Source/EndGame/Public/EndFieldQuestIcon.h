#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndFieldQuestIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndFieldQuestIcon : public UEndUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UEndFieldQuestIcon();
};

