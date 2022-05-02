#pragma once
#include "CoreMinimal.h"
#include "EndAIIntention.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EndAIIntentionIdleBase.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIIntentionIdleBase : public FEndAIIntention {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayingLookAt;
    
    UPROPERTY(EditAnywhere, Transient)
    float LookAtTimer;
    
    UPROPERTY(EditAnywhere, Transient)
    float LookAtWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator LookAtTargetRotation;
    
    UPROPERTY(EditAnywhere, Transient)
    float SaccadeTimer;
    
    UPROPERTY(EditAnywhere, Transient)
    float SaccadeWaitTime;
    
    UPROPERTY(EditAnywhere, Transient)
    float SaccadeWaitTimerByLookAt;
    
    UPROPERTY(EditAnywhere, Transient)
    float SaccadeUpdateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator SaccadeTargetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector MeshSpaceSaccadeTargetLocation;
    
    FEndAIIntentionIdleBase();
};

