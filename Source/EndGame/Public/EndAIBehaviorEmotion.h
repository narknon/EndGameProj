#pragma once
#include "CoreMinimal.h"
#include "EndAIBehavior.h"
#include "EndAIBehaviorEmotion.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBehaviorEmotion : public FEndAIBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName EmotionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LoopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool InterestDirection;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> TargetActor;
    
    FEndAIBehaviorEmotion();
};

