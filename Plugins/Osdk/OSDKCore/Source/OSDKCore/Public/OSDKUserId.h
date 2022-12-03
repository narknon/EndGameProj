#pragma once
#include "CoreMinimal.h"
#include "OSDKUserId.generated.h"

USTRUCT(BlueprintType)
struct OSDKCORE_API FOSDKUserId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Provider;
    
    FOSDKUserId();
};

