#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "EndMonkeyBarsDebugTextComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndMonkeyBarsDebugTextComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UEndMonkeyBarsDebugTextComponent();
};

