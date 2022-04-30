#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "FA0222_AnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FFA0222_AnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    ENDGAME_API FFA0222_AnimInstanceProxy();
};

