#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EEndEmissiveCurveType.h"
#include "EEndEmissiveModifierType.h"
#include "EndAnimNotifyBattleAbilityRushWeapon.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleAbilityRushWeapon : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ThrowDamageSourceID;
    
    UPROPERTY(EditAnywhere)
    FName ThrowAirDamageSourceID;
    
    UPROPERTY(EditAnywhere)
    FName RushGroundDamageSourceID;
    
    UPROPERTY(EditAnywhere)
    float RushGroundWeaponOffsetZ;
    
    UPROPERTY(EditAnywhere)
    FName RushAirDamageSourceID;
    
    UPROPERTY(EditAnywhere)
    float RushTime;
    
    UPROPERTY(EditAnywhere)
    float RushCalcDamageCoefficient;
    
    UPROPERTY(EditAnywhere)
    FName RushCactuarWeaponCharaID;
    
    UPROPERTY(EditAnywhere)
    float RushCactuarWeaponPitch;
    
    UPROPERTY(EditAnywhere)
    FName ReturnDamageSourceID;
    
    UPROPERTY(EditAnywhere)
    FName CatchDamageSourceID;
    
    UPROPERTY(EditAnywhere)
    FName RotateBoneName;
    
    UPROPERTY(EditAnywhere)
    FRotator ThrowRotateMaxVelocity;
    
    UPROPERTY(EditAnywhere)
    FRotator ThrowRotateAcceleration;
    
    UPROPERTY(EditAnywhere)
    FRotator ReturnRotateMaxVelocity;
    
    UPROPERTY(EditAnywhere)
    FRotator ReturnRotateAcceleration;
    
    UPROPERTY(EditAnywhere)
    FName BindEffectID;
    
    UPROPERTY(EditAnywhere)
    FName ColorPaletteId;
    
    UPROPERTY(EditAnywhere)
    EEndEmissiveModifierType Modifier;
    
    UPROPERTY(EditAnywhere)
    EEndEmissiveCurveType Curve;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UEndAnimNotifyBattleAbilityRushWeapon();
};

