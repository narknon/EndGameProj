#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavArea -FallbackName=NavArea
#include "EndNavAreaImpassable.generated.h"

UCLASS(Blueprintable)
class UEndNavAreaImpassable : public UNavArea {
    GENERATED_BODY()
public:
    UEndNavAreaImpassable();
};

