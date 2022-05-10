#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EndBalanceMoveDrawComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENDGAME_API UEndBalanceMoveDrawComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEndBalanceMoveDrawComponent();
};

