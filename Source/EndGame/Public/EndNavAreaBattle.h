#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavArea -FallbackName=NavArea
#include "EndNavAreaBattle.generated.h"

UCLASS(Blueprintable)
class UEndNavAreaBattle : public UNavArea {
    GENERATED_BODY()
public:
    UEndNavAreaBattle();
};

