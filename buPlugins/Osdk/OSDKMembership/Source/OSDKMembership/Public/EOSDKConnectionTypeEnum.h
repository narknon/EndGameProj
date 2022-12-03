#pragma once
#include "CoreMinimal.h"
#include "EOSDKConnectionTypeEnum.generated.h"

UENUM(BlueprintType)
enum EOSDKConnectionTypeEnum {
    NoAuth,
    PS5,
    Steam,
    Epic,
};

