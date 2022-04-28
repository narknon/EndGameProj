#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EEndBattleDamageSourcePositionBaseType.h"
#include "EEndAnimNotifyBattleDamageOwnerFilterType.h"
#include "EndAnimNotifyStateBattleDamage.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBattleDamage : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString DamageSourceID;
    
    UPROPERTY(EditAnywhere)
    uint8 Probability;
    
    UPROPERTY(EditAnywhere)
    EEndBattleDamageSourcePositionBaseType CreatePositionBase;
    
    UPROPERTY(EditAnywhere)
    FName CreatePositionName;
    
    UPROPERTY(EditAnywhere)
    FName ReplaceOwnerCharaName;
    
    UPROPERTY(EditAnywhere)
    EEndAnimNotifyBattleDamageOwnerFilterType OwnerFilterType;
    
    UEndAnimNotifyStateBattleDamage();
};

