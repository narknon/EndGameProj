#pragma once
#include "CoreMinimal.h"
#include "EndAIBehaviorPlayAnimation.h"
#include "EndAIBehaviorPlayContactAnimation.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBehaviorPlayContactAnimation : public FEndAIBehaviorPlayAnimation {
    GENERATED_BODY()
public:
    FEndAIBehaviorPlayContactAnimation();
};

