#pragma once
#include "CoreMinimal.h"
#include "EndAnimNotifyPlaySound.h"
#include "EWeaponSlot.h"
#include "EndAnimNotifyPlayWeaponSound.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyPlayWeaponSound : public UEndAnimNotifyPlaySound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EWeaponSlot WeaponSlot;
    
    UEndAnimNotifyPlayWeaponSound();
};

