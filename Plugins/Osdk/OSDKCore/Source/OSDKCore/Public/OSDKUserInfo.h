#pragma once
#include "CoreMinimal.h"
#include "OSDKUserId.h"
#include "OSDKUserInfo.generated.h"

USTRUCT(BlueprintType)
struct OSDKCORE_API FOSDKUserInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOSDKUserId UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Gamertag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Language;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Country;
    
    FOSDKUserInfo();
};

