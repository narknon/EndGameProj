#pragma once
#include "CoreMinimal.h"
#include "EEndEmotionType.h"
#include "EndAIIntentionTalkControlStateContext.generated.h"

USTRUCT(BlueprintType)
struct FEndAIIntentionTalkControlStateContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEndEmotionType, FName> EmotionalActionAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FName> TransitionAnimations;
    
    ENDGAME_API FEndAIIntentionTalkControlStateContext();
};

