#pragma once
#include "CoreMinimal.h"
#include "EndAnimSingleNodeInstance.h"
#include "EndAnimWeaponInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ENDGAME_API UEndAnimWeaponInstance : public UEndAnimSingleNodeInstance {
    GENERATED_BODY()
public:
    UEndAnimWeaponInstance();
};

