#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EEndForceFeedbackTrack.h"
#include "EEndForceFeedbackEffect.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_EndForceFeedback.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UAnimNotify_EndForceFeedback : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEndForceFeedbackTrack Track;
    
    UPROPERTY(EditAnywhere)
    EEndForceFeedbackEffect Effect;
    
    UPROPERTY(EditAnywhere)
    bool bWithPriorityControl;
    
    UPROPERTY(EditAnywhere)
    bool bPlayForcibly;
    
    UAnimNotify_EndForceFeedback();
};

