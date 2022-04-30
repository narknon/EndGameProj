#pragma once
#include "CoreMinimal.h"
#include "EndBattleSetNormalAttackCountCondition.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EndAnimNotifyBattleSetNormalAttackOverrideCount.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleSetNormalAttackOverrideCount : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EndBattleSetNormalAttackCountCondition Condition;
    
    UEndAnimNotifyBattleSetNormalAttackOverrideCount();
};

