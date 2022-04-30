#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavArea -FallbackName=NavArea
#include "EndNavAreaLadder.generated.h"

UCLASS(Blueprintable)
class UEndNavAreaLadder : public UNavArea {
    GENERATED_BODY()
public:
    UEndNavAreaLadder();
};

