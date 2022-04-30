#pragma once
#include "CoreMinimal.h"
#include "EndAIIntention.h"
#include "EndAIIntentionContact.generated.h"

class UEndAIIntentionContactSetting;

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIIntentionContact : public FEndAIIntention {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndAIIntentionContactSetting* Setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayingLookAt;
    
    UPROPERTY(EditAnywhere, Transient)
    float LookAtTimer;
    
    UPROPERTY(EditAnywhere, Transient)
    float LookAtDuration;
    
    UPROPERTY(EditAnywhere, Transient)
    float LookAtCoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayingAnimation;
    
    UPROPERTY(EditAnywhere, Transient)
    float AnimationTimer;
    
    UPROPERTY(EditAnywhere, Transient)
    float AnimationCoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayingHipMove;
    
    UPROPERTY(EditAnywhere, Transient)
    float HipMoveTimer;
    
    UPROPERTY(EditAnywhere, Transient)
    float HipMoveCoolDownTime;
    
    FEndAIIntentionContact();
};

