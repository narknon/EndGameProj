#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateBattleAbilityForceReturnWeapon.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBattleAbilityForceReturnWeapon : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ReturnDamageSourceID;
    
    UPROPERTY(EditAnywhere)
    FRotator ReturnRotateMaxVelocity;
    
    UPROPERTY(EditAnywhere)
    FRotator ReturnRotateAcceleration;
    
    UPROPERTY(EditAnywhere)
    bool bDisableWeaponCorrectionDirection;
    
    UEndAnimNotifyStateBattleAbilityForceReturnWeapon();
};

