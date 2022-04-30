#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavArea -FallbackName=NavArea
#include "EndNavAreaHookShot.generated.h"

UCLASS(Blueprintable)
class UEndNavAreaHookShot : public UNavArea {
    GENERATED_BODY()
public:
    UEndNavAreaHookShot();
};

