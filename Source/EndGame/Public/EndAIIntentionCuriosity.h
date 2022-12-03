#pragma once
#include "CoreMinimal.h"
#include "EndAIIntention.h"
#include "UObject/NoExportTypes.h"
#include "EndAIIntentionCuriosity.generated.h"

class UEndAIIntentionCuriositySetting;

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIIntentionCuriosity : public FEndAIIntention {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndAIIntentionCuriositySetting* Setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInterestLooking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector InterestLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InterestActorDuringTimer;
    
    FEndAIIntentionCuriosity();
};

