#pragma once
#include "CoreMinimal.h"
#include "EndAIActorCognition.h"
#include "EndAIBlackboard.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBlackboard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Pleasure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Sadness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Anger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Caution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FEndAIActorCognition> ActorCognitions;
    
    FEndAIBlackboard();
};

