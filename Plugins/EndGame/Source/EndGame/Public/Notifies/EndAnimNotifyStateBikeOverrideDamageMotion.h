#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateBikeOverrideDamageMotion.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikeOverrideDamageMotion : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    FName DamageMotionName;
    
public:
    UEndAnimNotifyStateBikeOverrideDamageMotion();
};

