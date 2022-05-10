#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "EndFieldActionSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndFieldActionSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UEndFieldActionSplineComponent();
};

