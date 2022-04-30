#pragma once
#include "CoreMinimal.h"
#include "EndAIModelModifier.h"
#include "EndAIModelTalkModifier.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIModelTalkModifier : public FEndAIModelModifier {
    GENERATED_BODY()
public:
    FEndAIModelTalkModifier();
};

