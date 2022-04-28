#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndMenuSpeedMeterIcon.generated.h"

UCLASS(EditInlineNew)
class UEndMenuSpeedMeterIcon : public UEndUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float START;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Max;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MeterUpAnimationPower;
    
    UEndMenuSpeedMeterIcon();
};

