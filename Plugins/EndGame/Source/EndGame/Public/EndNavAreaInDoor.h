#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavArea -FallbackName=NavArea
#include "EndNavAreaInDoor.generated.h"

UCLASS(Blueprintable)
class UEndNavAreaInDoor : public UNavArea {
    GENERATED_BODY()
public:
    UEndNavAreaInDoor();
};

