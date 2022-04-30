#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EndWireMeshMoveDrawComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENDGAME_API UEndWireMeshMoveDrawComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEndWireMeshMoveDrawComponent();
};

