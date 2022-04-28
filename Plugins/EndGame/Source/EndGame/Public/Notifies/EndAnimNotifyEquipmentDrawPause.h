#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EWeaponSlot.h"
#include "EPauseMask.h"
#include "EndAnimNotifyEquipmentDrawPause.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyEquipmentDrawPause : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EWeaponSlot Slot;
    
    UPROPERTY(EditAnywhere)
    EPauseMask Mask;
    
    UPROPERTY(EditAnywhere)
    bool Pause;
    
    UEndAnimNotifyEquipmentDrawPause();
};

