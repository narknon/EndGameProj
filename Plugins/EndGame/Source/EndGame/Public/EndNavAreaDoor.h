#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavArea -FallbackName=NavArea
#include "EndNavAreaDoor.generated.h"

UCLASS(Blueprintable)
class UEndNavAreaDoor : public UNavArea {
    GENERATED_BODY()
public:
    UEndNavAreaDoor();
};

