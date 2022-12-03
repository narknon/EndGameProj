#pragma once
#include "CoreMinimal.h"
#include "EOSDKMembershipStatus.generated.h"

UENUM(BlueprintType)
enum class EOSDKMembershipStatus : uint8 {
    SUCCESS,
    FAILED_INVALID_OPERATION,
    FAILED_NO_RESPONSE,
    FAILED_UNKNOWN,
    FAILED_INCORRECT_CREDENTIALS,
};

