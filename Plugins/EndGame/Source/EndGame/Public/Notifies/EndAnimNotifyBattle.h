#pragma once
#include "CoreMinimal.h"
#include "EEndAnimNotifyBattleType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBattle.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattle : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEndAnimNotifyBattleType Type;
    
    UEndAnimNotifyBattle();
};

