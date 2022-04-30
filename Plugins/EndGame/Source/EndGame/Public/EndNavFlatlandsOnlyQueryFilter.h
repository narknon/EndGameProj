#pragma once
#include "CoreMinimal.h"
#include "EndNavQueryFilterBase.h"
#include "EndNavFlatlandsOnlyQueryFilter.generated.h"

UCLASS(Blueprintable)
class UEndNavFlatlandsOnlyQueryFilter : public UEndNavQueryFilterBase {
    GENERATED_BODY()
public:
    UEndNavFlatlandsOnlyQueryFilter();
};

