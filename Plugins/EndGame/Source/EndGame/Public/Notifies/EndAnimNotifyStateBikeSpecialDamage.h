#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EEndBattleDamageSourcePositionBaseType.h"
#include "EndAnimNotifyStateBikeSpecialDamage.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikeSpecialDamage : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName DamageSourceID;
    
    UPROPERTY(EditAnywhere)
    EEndBattleDamageSourcePositionBaseType CreatePositionBase;
    
    UPROPERTY(EditAnywhere)
    FName CreatePositionName;
    
    UPROPERTY(EditAnywhere)
    int32 Parameter;
    
    UEndAnimNotifyStateBikeSpecialDamage();
};

