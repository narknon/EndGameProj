#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EEndBattleDamageSourcePositionBaseType.h"
#include "EEndAnimNotifyBattleDamageOwnerFilterType.h"
#include "EndAnimNotifyBattleDamage.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleDamage : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString DamageSourceID;
    
    UPROPERTY(EditAnywhere)
    EEndBattleDamageSourcePositionBaseType CreatePositionBase;
    
    UPROPERTY(EditAnywhere)
    FName CreatePositionName;
    
    UPROPERTY(EditAnywhere)
    FName ReplaceOwnerCharaName;
    
    UPROPERTY(EditAnywhere)
    EEndAnimNotifyBattleDamageOwnerFilterType OwnerFilterType;
    
    UEndAnimNotifyBattleDamage();
};

