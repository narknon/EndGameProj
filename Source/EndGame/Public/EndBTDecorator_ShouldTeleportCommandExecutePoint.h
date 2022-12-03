#pragma once
#include "CoreMinimal.h"
#include "EndBTDecorator_CheckConditionBase.h"
#include "EndBTDecorator_ShouldTeleportCommandExecutePoint.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_ShouldTeleportCommandExecutePoint : public UEndBTDecorator_CheckConditionBase {
    GENERATED_BODY()
public:
    UEndBTDecorator_ShouldTeleportCommandExecutePoint();
};

