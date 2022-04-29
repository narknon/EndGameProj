#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBattleGuardMode.generated.h"

UCLASS(CollapseCategories)
class UEndAnimNotifyBattleGuardMode : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Flag;
    
    UEndAnimNotifyBattleGuardMode();
};

