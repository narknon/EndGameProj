#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "FA0122_AnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FFA0122_AnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    ENDGAME_API FFA0122_AnimInstanceProxy();
};

