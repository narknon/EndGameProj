#pragma once
#include "CoreMinimal.h"
#include "EndLipSyncAudioAttackAnimation.h"
#include "UObject/Object.h"
#include "EndLipSyncAudioAttackBrowAnimation.h"
#include "EndLipSyncSolver.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEndLipSyncSolver : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioPowerTimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioPowerAttenuationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioLargeAttackThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndLipSyncAudioAttackAnimation> AudioLargeAttackAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndLipSyncAudioAttackBrowAnimation> AudioLargeAttackBrowAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioSmallAttackThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndLipSyncAudioAttackAnimation> AudioSmallAttackAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndLipSyncAudioAttackBrowAnimation> AudioSmallAttackBrowAnimations;
    
    UEndLipSyncSolver();
};

