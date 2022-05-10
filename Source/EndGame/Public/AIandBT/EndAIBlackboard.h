#pragma once
#include "CoreMinimal.h"
#include "EndAIActorCognition.h"
#include "EndAIBlackboard.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBlackboard {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    float Pleasure;
    
    UPROPERTY(EditAnywhere, Transient)
    float Sadness;
    
    UPROPERTY(EditAnywhere, Transient)
    float Anger;
    
    UPROPERTY(EditAnywhere, Transient)
    float Caution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FEndAIActorCognition> ActorCognitions;
    
    FEndAIBlackboard();
};

