#pragma once
#include "CoreMinimal.h"
#include "EOSDKHTTPClientLoggingFlags.generated.h"

UENUM(BlueprintType)
enum class EOSDKHTTPClientLoggingFlags : uint8 {
    LOG_DISABLED,
    LOG_REQUEST,
    LOG_REQUEST_SOME_HEADERS,
    LOG_REQUEST_ALL_HEADERS,
    LOG_REQUEST_BODY,
    LOG_REQUEST_ANY,
    LOG_RESPONSE,
    LOG_RESPONSE_SOME_HEADERS,
    LOG_RESPONSE_ALL_HEADERS,
    LOG_RESPONSE_BODY,
    LOG_RESPONSE_ANY,
    LOG_DEFAULT,
    LOG_MAX UMETA(Hidden),
};

