#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SQEXSEADAutoSeComponentCallback.generated.h"

UCLASS(Abstract, Blueprintable, Transient)
class SQEXSEAD_API USQEXSEADAutoSeComponentCallback : public UObject {
    GENERATED_BODY()
public:
    USQEXSEADAutoSeComponentCallback();
};

