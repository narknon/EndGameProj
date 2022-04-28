#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EWeaponSlot.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_EndEnableWeaponRagdollPhysics.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UAnimNotify_EndEnableWeaponRagdollPhysics : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bSpecificWeaponSlotOnly;
    
    UPROPERTY(EditAnywhere)
    EWeaponSlot WeaponSlot;
    
    UAnimNotify_EndEnableWeaponRagdollPhysics();
};

