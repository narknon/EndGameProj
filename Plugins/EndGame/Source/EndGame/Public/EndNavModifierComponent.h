#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavModifierComponent -FallbackName=NavModifierComponent
#include "EndNavModifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
    UEndNavModifierComponent();
};

