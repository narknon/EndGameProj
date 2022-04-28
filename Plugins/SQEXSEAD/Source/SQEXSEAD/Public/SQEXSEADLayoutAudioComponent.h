#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAudioComponent.h"
#include "SQEXSEADLayoutAudioComponent.generated.h"

UCLASS(EditInlineNew, MinimalAPI, meta=(BlueprintSpawnableComponent))
class USQEXSEADLayoutAudioComponent : public USQEXSEADAudioComponent {
    GENERATED_BODY()
public:
    USQEXSEADLayoutAudioComponent();
};

