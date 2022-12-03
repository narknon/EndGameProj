#pragma once
#include "CoreMinimal.h"
#include "OSDKGameInfo.h"
#include "OSDKInfo.generated.h"

USTRUCT(BlueprintType)
struct OSDKCORE_API FOSDKInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HardwareName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOSDKGameInfo Game;
    
    FOSDKInfo();
};

