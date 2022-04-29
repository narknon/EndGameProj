#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EndBattleSetNormalAttackCountCondition.h"
#include "EndAnimNotifyBattleSetNormalAttackOverrideCount.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleSetNormalAttackOverrideCount : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Count;
    
    UPROPERTY(EditAnywhere)
    EndBattleSetNormalAttackCountCondition Condition;
    
    UEndAnimNotifyBattleSetNormalAttackOverrideCount();
};

