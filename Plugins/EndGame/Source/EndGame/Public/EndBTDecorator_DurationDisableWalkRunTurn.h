#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EndBTDecorator_DurationDisableWalkRunTurn.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_DurationDisableWalkRunTurn : public UBTDecorator {
    GENERATED_BODY()
public:
    UEndBTDecorator_DurationDisableWalkRunTurn();
};

