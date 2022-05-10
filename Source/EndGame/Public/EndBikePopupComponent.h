#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EndBikePopupComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndBikePopupComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEndBikePopupComponent();
};

