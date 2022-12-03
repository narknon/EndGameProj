#pragma once
#include "CoreMinimal.h"
#include "OSDKSandboxInfo.generated.h"

USTRUCT(BlueprintType)
struct OSDKCORE_API FOSDKSandboxInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString User;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Config;
    
    FOSDKSandboxInfo();
};

