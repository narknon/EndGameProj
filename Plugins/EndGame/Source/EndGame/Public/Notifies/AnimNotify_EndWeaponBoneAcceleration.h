#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotify_EndWeaponBoneAcceleration.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UAnimNotify_EndWeaponBoneAcceleration : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    FRotator MaxVelocity;
    
    UPROPERTY(EditAnywhere)
    FRotator BeginAcceleration;
    
    UPROPERTY(EditAnywhere)
    FRotator EndAcceleration;
    
    UAnimNotify_EndWeaponBoneAcceleration();
};

