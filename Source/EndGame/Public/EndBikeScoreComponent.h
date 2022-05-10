#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EndBikeScoreComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndBikeScoreComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEndBikeScoreComponent();
};

