#pragma once
#include "CoreMinimal.h"
#include "AnimNode_HSFLipSync.h"
#include "AnimNode_EndFace.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FAnimNode_EndFace : public FAnimNode_HSFLipSync {
    GENERATED_BODY()
public:
    FAnimNode_EndFace();
};

