#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EndBTDecorator_ClearInputBuffer.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_ClearInputBuffer : public UBTDecorator {
    GENERATED_BODY()
public:
    UEndBTDecorator_ClearInputBuffer();
};

