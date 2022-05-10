#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "EndDebugTagCommentComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndDebugTagCommentComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UEndDebugTagCommentComponent();
};

