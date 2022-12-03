#pragma once
#include "CoreMinimal.h"
#include "EndAIIntentionIdleBase.h"
#include "EndAIIntentionIdle.generated.h"

class UEndAIIntentionIdleSetting;

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIIntentionIdle : public FEndAIIntentionIdleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndAIIntentionIdleSetting* Setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCautionLookAtPositiveAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimationTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimationWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOverrideIdleAnimationWaitTimeRange;
    
    FEndAIIntentionIdle();
};

