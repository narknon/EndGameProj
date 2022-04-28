#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBattleEnableFieldDead.generated.h"

UCLASS(CollapseCategories)
class UEndAnimNotifyBattleEnableFieldDead : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool Enable;
    
public:
    UEndAnimNotifyBattleEnableFieldDead();
};

