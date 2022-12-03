#pragma once
#include "CoreMinimal.h"
#include "OSDKAuthenticationInfo.generated.h"

USTRUCT(BlueprintType)
struct OSDKCORE_API FOSDKAuthenticationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoginUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SignupURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TokenExpiration;
    
    FOSDKAuthenticationInfo();
};

