#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBattleRemoveDamageCondition.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleRemoveDamageCondition : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RemovePhysicsIgnore;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DisableImmotality;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableTarget;
    
    UEndAnimNotifyBattleRemoveDamageCondition();
};

