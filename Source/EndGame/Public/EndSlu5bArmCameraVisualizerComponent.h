#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EndSlu5bArmCameraVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENDGAME_API UEndSlu5bArmCameraVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEndSlu5bArmCameraVisualizerComponent();
};

