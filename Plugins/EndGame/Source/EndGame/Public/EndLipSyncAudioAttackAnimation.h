#pragma once
#include "CoreMinimal.h"
#include "EndLipSyncAnimation.h"
#include "EndLipSyncAudioAttackAnimation.generated.h"

USTRUCT(BlueprintType)
struct FEndLipSyncAudioAttackAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndLipSyncAnimation> Animations;
    
    ENDGAME_API FEndLipSyncAudioAttackAnimation();
};

