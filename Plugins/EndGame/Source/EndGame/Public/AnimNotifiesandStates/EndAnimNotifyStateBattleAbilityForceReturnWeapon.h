#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "UObject/NoExportTypes.h"
#include "EndAnimNotifyStateBattleAbilityForceReturnWeapon.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBattleAbilityForceReturnWeapon : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReturnDamageSourceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ReturnRotateMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ReturnRotateAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableWeaponCorrectionDirection;
    
    UEndAnimNotifyStateBattleAbilityForceReturnWeapon();
};

