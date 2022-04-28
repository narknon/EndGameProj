#pragma once
#include "CoreMinimal.h"
#include "EndAnimSingleNodeInstance.h"
#include "EndAnimWeaponInstance.generated.h"

UCLASS(NonTransient)
class ENDGAME_API UEndAnimWeaponInstance : public UEndAnimSingleNodeInstance {
    GENERATED_BODY()
public:
    UEndAnimWeaponInstance();
};

