#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EndLipSyncAudioAttackAnimation.h"
#include "EndLipSyncAudioAttackBrowAnimation.h"
#include "EndLipSyncSolver.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEndLipSyncSolver : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AudioPowerTimeOffset;
    
    UPROPERTY(EditAnywhere)
    float AudioPowerAttenuationSpeed;
    
    UPROPERTY(EditAnywhere)
    float AudioLargeAttackThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndLipSyncAudioAttackAnimation> AudioLargeAttackAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndLipSyncAudioAttackBrowAnimation> AudioLargeAttackBrowAnimations;
    
    UPROPERTY(EditAnywhere)
    float AudioSmallAttackThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndLipSyncAudioAttackAnimation> AudioSmallAttackAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndLipSyncAudioAttackBrowAnimation> AudioSmallAttackBrowAnimations;
    
    UEndLipSyncSolver();
};

