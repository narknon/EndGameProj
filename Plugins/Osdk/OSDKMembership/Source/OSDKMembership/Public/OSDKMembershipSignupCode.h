#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OSDKMembershipSignupCode.generated.h"

USTRUCT(BlueprintType)
struct OSDKMEMBERSHIP_API FOSDKMembershipSignupCode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Link;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Display;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Expiration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QrPNGBase64;
    
    FOSDKMembershipSignupCode();
};

