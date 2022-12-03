#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "AnimNode_EndAdjustOrientation.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FAnimNode_EndAdjustOrientation : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    FAnimNode_EndAdjustOrientation();
};

