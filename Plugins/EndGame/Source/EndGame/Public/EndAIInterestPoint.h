#pragma once
#include "CoreMinimal.h"
#include "EInterSense.h"
#include "EndAIInterestPoint.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIInterestPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(EditAnywhere, Transient)
    float InterestRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EInterSense Sense;
    
    FEndAIInterestPoint();
};

