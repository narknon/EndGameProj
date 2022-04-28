#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EEndForceFeedbackTrack.h"
#include "EEndForceFeedbackEffect.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotify_EndForceFeedbackRange.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UAnimNotify_EndForceFeedbackRange : public UAnimNotifyState {
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
    
    UPROPERTY(EditAnywhere)
    bool bContinue;
    
    UAnimNotify_EndForceFeedbackRange();
};

