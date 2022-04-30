#pragma once
#include "CoreMinimal.h"
#include "eBodyParts.h"
#include "PartImpulseOverride.generated.h"

USTRUCT(BlueprintType)
struct FPartImpulseOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<eBodyParts> Part;
    
    UPROPERTY(EditAnywhere)
    float Impulse;
    
    BODYDRIVERPLUGIN_API FPartImpulseOverride();
};

