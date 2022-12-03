#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOSDKFutureFinishResult.h"
#include "EOSDKFutureStatus.h"
#include "Engine/LatentActionManager.h"
#include "OSDKFutureObject.generated.h"

UCLASS(Blueprintable)
class OSDKCORE_API UOSDKFutureObject : public UObject {
    GENERATED_BODY()
public:
    UOSDKFutureObject();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOSDKFutureStatus GetStatus() const;
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void Await(UObject* WorldContextObject, EOSDKFutureFinishResult& FinishResult, FLatentActionInfo LatentInfo);
    
};

