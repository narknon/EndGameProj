#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_EndBehavior.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FAnimNode_EndBehavior : public FAnimNode_Base {
    GENERATED_BODY()
public:
    FAnimNode_EndBehavior();
};

