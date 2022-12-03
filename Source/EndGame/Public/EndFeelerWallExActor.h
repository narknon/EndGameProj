#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "EndFeelerActorInterface.h"
#include "EndFeelerWallExSetting.h"
#include "EndActorBaseInterface.h"
#include "EndFeelerWallExWave.h"
#include "EndFeelerWallExActor.generated.h"

UCLASS(Blueprintable)
class AEndFeelerWallExActor : public ATriggerBox, public IEndFeelerActorInterface, public IEndActorBaseInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRefreshInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndFeelerWallExWave> Waves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndFeelerWallExSetting Setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideFadeOutTime;
    
    AEndFeelerWallExActor();
    UFUNCTION(BlueprintCallable)
    void Stop(float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void Play(float BlendTime);
    
    
    // Fix for true pure virtual functions not being implemented
};

