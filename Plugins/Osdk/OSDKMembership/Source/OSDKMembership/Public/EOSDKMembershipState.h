#pragma once
#include "CoreMinimal.h"
#include "EOSDKMembershipState.generated.h"

UENUM(BlueprintType)
enum class EOSDKMembershipState : uint8 {
    ACCOUNT_CONFIRMED,
    ACCOUNT_LOADING,
    SIGNUP_CODE,
    SIGNUP_CODE_LOADING,
    FAILURE,
};

