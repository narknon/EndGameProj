#pragma once
#include "CoreMinimal.h"
#include "EEndAIBehaviorState.h"
#include "EEndAIBehaviorTag.h"
#include "EEndAIIntentionPriority.h"
#include "EndAIBehavior.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdatableWhenAIStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EEndAIBehaviorTag> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEndAIIntentionPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEndAIBehaviorState CurrentState;
    
    UPROPERTY(EditAnywhere)
    uint32 Index;
    
    FEndAIBehavior();
};

