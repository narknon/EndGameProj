#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EndBikeCutSceneComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndBikeCutSceneComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEndBikeCutSceneComponent();
};

