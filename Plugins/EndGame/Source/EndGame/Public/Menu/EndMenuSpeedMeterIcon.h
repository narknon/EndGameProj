#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndMenuSpeedMeterIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndMenuSpeedMeterIcon : public UEndUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float START;
    
    UPROPERTY(EditAnywhere)
    float Max;
    
    UPROPERTY(EditAnywhere)
    float MeterUpAnimationPower;
    
    UEndMenuSpeedMeterIcon();
};

