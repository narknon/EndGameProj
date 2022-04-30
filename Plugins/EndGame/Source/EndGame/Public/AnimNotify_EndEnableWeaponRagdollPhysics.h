#pragma once
#include "CoreMinimal.h"
#include "EWeaponSlot.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_EndEnableWeaponRagdollPhysics.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ENDGAME_API UAnimNotify_EndEnableWeaponRagdollPhysics : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpecificWeaponSlotOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponSlot WeaponSlot;
    
    UAnimNotify_EndEnableWeaponRagdollPhysics();
};

