#pragma once
#include "CoreMinimal.h"
#include "EEndLinkAbilityType.generated.h"

UENUM(BlueprintType)
enum class EEndLinkAbilityType : uint8 {
    None,
    Nomal,
    Sync,
    Protect,
    Protect_Aerial,
};

