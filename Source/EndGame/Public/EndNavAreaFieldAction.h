#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavArea -FallbackName=NavArea
#include "EndNavAreaFieldAction.generated.h"

UCLASS(Blueprintable)
class UEndNavAreaFieldAction : public UNavArea {
    GENERATED_BODY()
public:
    UEndNavAreaFieldAction();
};

