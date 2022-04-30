#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "EndWireMeshMovePointCreateBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndWireMeshMovePointCreateBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UEndWireMeshMovePointCreateBoxComponent();
};

