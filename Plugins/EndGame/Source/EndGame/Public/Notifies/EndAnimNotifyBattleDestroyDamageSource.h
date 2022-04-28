#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBattleDestroyDamageSource.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleDestroyDamageSource : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName DamageSourceID;
    
    UEndAnimNotifyBattleDestroyDamageSource();
};

