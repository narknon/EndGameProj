#pragma once
#include "CoreMinimal.h"
#include "EndTriggerBox.h"
#include "EndDisable3DAudioUITriggerBox.generated.h"

UCLASS(Blueprintable)
class AEndDisable3DAudioUITriggerBox : public AEndTriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableStateOnOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDuckingPlay;
    
    AEndDisable3DAudioUITriggerBox();
};

