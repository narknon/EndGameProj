#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EndDuringCharacterMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndDuringCharacterMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEndDuringCharacterMovementComponent();
};

