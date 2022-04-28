#pragma once
#include "CoreMinimal.h"
#include "EWeaponSlot.h"
#include "EndAnimNotifyStatePlaySound.h"
#include "EndAnimNotifyStatePlayWeaponSound.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStatePlayWeaponSound : public UEndAnimNotifyStatePlaySound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EWeaponSlot WeaponSlot;
    
    UEndAnimNotifyStatePlayWeaponSound();
};

