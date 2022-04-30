#pragma once
#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
#include "SQEXSEADAudioComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADAudioComponent : public UAudioComponent {
    GENERATED_BODY()
public:
    USQEXSEADAudioComponent();
};

