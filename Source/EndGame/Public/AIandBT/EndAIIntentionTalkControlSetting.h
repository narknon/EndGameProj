#pragma once
#include "CoreMinimal.h"
#include "EndAIIntentionTalkControlStateContext.h"
#include "EndAIIntentionIdleBaseSetting.h"
#include "UObject/NoExportTypes.h"
#include "EndAIIntentionTalkControlSetting.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API UEndAIIntentionTalkControlSetting : public UEndAIIntentionIdleBaseSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CoolDownRate;
    
    UPROPERTY(EditAnywhere)
    float LookAtWaitTimeBiasListener;
    
    UPROPERTY(EditAnywhere)
    float LookAtWaitTimeBiasOther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAtActiveBlendTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAtDeactiveBlendTimeRange;
    
    UPROPERTY(EditAnywhere)
    float LookAtUpperFollowTargetHeadRate;
    
    UPROPERTY(EditAnywhere)
    float LookAtLowerFollowTargetHeadRate;
    
    UPROPERTY(EditAnywhere)
    float LookAtToSaccadeTargetRate;
    
    UPROPERTY(EditAnywhere)
    float LookAtTurnAngleThreshold;
    
    UPROPERTY(EditAnywhere)
    float LookAtTurnBlendTime;
    
    UPROPERTY(EditAnywhere)
    float LookAtTurnUpperBodyBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAtTurnWaitTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAtOffsetHeightRange;
    
    UPROPERTY(EditAnywhere)
    float LookAtOffsetHeightInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float LookAtOffsetHeightApplyDistance;
    
    UPROPERTY(EditAnywhere)
    float LookAtDeactiveDistance;
    
    UPROPERTY(EditAnywhere)
    float SaccadeTargetOffsetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndAIIntentionTalkControlStateContext> StateContexts;
    
    UPROPERTY(EditAnywhere)
    float PlayAnimationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D StateChangeBeginWaitTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D StateChangeContinuationWaitTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TalkInMovementWalkLoopCountRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TalkFinishDelayTimeRange;
    
    UEndAIIntentionTalkControlSetting();
};

