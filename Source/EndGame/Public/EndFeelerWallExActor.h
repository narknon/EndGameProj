#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "EndActorBaseInterface.h"
#include "EndFeelerActorInterface.h"
#include "EndFeelerWallExWave.h"
#include "EndFeelerWallExSetting.h"
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
    
    UPROPERTY(EditAnywhere)
    float FadeInWaitTime;
    
    UPROPERTY(EditAnywhere)
    float OverrideFadeInTime;
    
    UPROPERTY(EditAnywhere)
    float OverrideFadeOutTime;
    
    AEndFeelerWallExActor();
    UFUNCTION(BlueprintCallable)
    void Stop(float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void Play(float BlendTime);
    
    
    // Fix for true pure virtual functions not being implemented
};

