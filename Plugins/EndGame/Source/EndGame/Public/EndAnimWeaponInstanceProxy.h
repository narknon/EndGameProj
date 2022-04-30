#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimSingleNodeInstanceProxy.h"
#include "EndAnimWeaponInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAnimWeaponInstanceProxy : public FAnimSingleNodeInstanceProxy {
    GENERATED_BODY()
public:
    FEndAnimWeaponInstanceProxy();
};

