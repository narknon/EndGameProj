#pragma once
#include "CoreMinimal.h"
#include "EndAIIntention.h"
#include "EndAIIntentionWallContact.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIIntentionWallContact : public FEndAIIntention {
    GENERATED_BODY()
public:
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
    
    FEndAIIntentionWallContact();
};

