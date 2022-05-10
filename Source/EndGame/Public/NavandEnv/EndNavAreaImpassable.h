#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavAreas/NavArea.h"
#include "EndNavAreaImpassable.generated.h"

UCLASS(Blueprintable)
class UEndNavAreaImpassable : public UNavArea {
    GENERATED_BODY()
public:
    UEndNavAreaImpassable();
};

