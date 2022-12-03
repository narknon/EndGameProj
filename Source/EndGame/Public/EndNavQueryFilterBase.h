#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "EndNavQueryFilterBase.generated.h"

UCLASS(Blueprintable)
class UEndNavQueryFilterBase : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UEndNavQueryFilterBase();
};

