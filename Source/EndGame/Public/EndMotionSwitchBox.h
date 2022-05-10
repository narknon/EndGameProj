#pragma once
#include "CoreMinimal.h"
#include "EndTriggerBox.h"
#include "EndMotionSwitchBox.generated.h"

UCLASS(Blueprintable)
class AEndMotionSwitchBox : public AEndTriggerBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MotionSwitchName;
    
public:
    AEndMotionSwitchBox();
};

