#pragma once
#include "CoreMinimal.h"
#include "EOSDKCommunity.h"
#include "OSDKProfileId.generated.h"

USTRUCT(BlueprintType)
struct OSDKCORE_API FOSDKProfileId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOSDKCommunity Community;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FOSDKProfileId();
};

