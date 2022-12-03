#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EndAIIntentionCuriositySetting.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API UEndAIIntentionCuriositySetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterestThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterestActorDuringTimeMin;
    
    UEndAIIntentionCuriositySetting();
};

