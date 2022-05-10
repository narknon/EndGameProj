#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleSummonGaugeIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndBattleSummonGaugeIcon : public UEndUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D _OffsetPosition;
    
    UEndBattleSummonGaugeIcon();
};

