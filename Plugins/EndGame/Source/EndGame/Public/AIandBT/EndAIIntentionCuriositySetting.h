#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EndAIIntentionCuriositySetting.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API UEndAIIntentionCuriositySetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float InterestThreshold;
    
    UPROPERTY(EditAnywhere)
    float DistanceThreshold;
    
    UPROPERTY(EditAnywhere)
    float InterestActorDuringTimeMin;
    
    UEndAIIntentionCuriositySetting();
};

