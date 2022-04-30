#pragma once
#include "CoreMinimal.h"
#include "EWeaponSlot.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EPauseMask.h"
#include "EndAnimNotifyEquipmentDrawPause.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ENDGAME_API UEndAnimNotifyEquipmentDrawPause : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponSlot Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPauseMask Mask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Pause;
    
    UEndAnimNotifyEquipmentDrawPause();
};

