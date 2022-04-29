#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBattleEnableForceUpdateATB.generated.h"

UCLASS(CollapseCategories)
class UEndAnimNotifyBattleEnableForceUpdateATB : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool Enable;
    
public:
    UEndAnimNotifyBattleEnableForceUpdateATB();
};

