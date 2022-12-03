#pragma once
#include "CoreMinimal.h"
#include "OSDKNetworkInfo.h"
#include "OSDKSandboxInfo.h"
#include "OSDKGeolocationInfo.h"
#include "OSDKAuthenticationInfo.h"
#include "OSDKClientInfo.generated.h"

USTRUCT(BlueprintType)
struct OSDKCORE_API FOSDKClientInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOSDKNetworkInfo Network;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOSDKSandboxInfo Sandbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOSDKGeolocationInfo Geolocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOSDKAuthenticationInfo Authentication;
    
    FOSDKClientInfo();
};

