#pragma once
#include "CoreMinimal.h"
#include "EOSDKCommunity.generated.h"

UENUM(BlueprintType)
enum class EOSDKCommunity : uint8 {
    steam,
    live,
    psn,
    membership,
    oculus,
    facebook,
    web,
    feral,
    os,
    unittest,
    gamecenter,
    google,
    microsoft,
    corporate,
    amazon,
    noauth,
    unknown,
};

