#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_EndReserveResetBonamikOnEndCutScene.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UAnimNotify_EndReserveResetBonamikOnEndCutScene : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bResetPose;
    
    UPROPERTY(EditAnywhere)
    int32 PreRoll;
    
    UAnimNotify_EndReserveResetBonamikOnEndCutScene();
};

