#pragma once
#include "CoreMinimal.h"
#include "OSDKNetworkInfo.generated.h"

USTRUCT(BlueprintType)
struct OSDKCORE_API FOSDKNetworkInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DiscoveryURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BaseURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PublicIP;
    
    FOSDKNetworkInfo();
};

