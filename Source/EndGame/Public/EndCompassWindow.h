#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EndUserWidget.h"
#include "EndCompassWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndCompassWindow : public UEndUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompassMarginX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEndUserWidget> AreaEffectWidgetClass;
    
    UEndCompassWindow();
};

