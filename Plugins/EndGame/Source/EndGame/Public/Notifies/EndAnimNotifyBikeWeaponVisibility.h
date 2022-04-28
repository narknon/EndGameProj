#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EWeaponSlot.h"
#include "EndAnimNotifyBikeWeaponVisibility.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBikeWeaponVisibility : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    EWeaponSlot Slot;
    
    UPROPERTY(EditInstanceOnly)
    bool bVisible;
    
    UPROPERTY(EditInstanceOnly)
    bool bHideAll;
    
    UEndAnimNotifyBikeWeaponVisibility();
};

