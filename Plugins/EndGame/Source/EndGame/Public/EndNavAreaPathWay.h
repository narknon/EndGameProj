#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavArea -FallbackName=NavArea
#include "EndNavAreaPathWay.generated.h"

UCLASS(Blueprintable)
class UEndNavAreaPathWay : public UNavArea {
    GENERATED_BODY()
public:
    UEndNavAreaPathWay();
};

