#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_EndPoseMatching.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UAnimNotify_EndPoseMatching : public UAnimNotify {
    GENERATED_BODY()
public:
    UAnimNotify_EndPoseMatching();
};

