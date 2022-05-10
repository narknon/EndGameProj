#pragma once
#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "EndTextRenderComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndTextRenderComponent : public UTextRenderComponent {
    GENERATED_BODY()
public:
    UEndTextRenderComponent();
};

