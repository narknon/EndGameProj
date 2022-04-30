#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "EndDuctMoveDebugTextComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndDuctMoveDebugTextComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UEndDuctMoveDebugTextComponent();
};

