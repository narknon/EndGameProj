#pragma once
#include "CoreMinimal.h"
#include "EEndAnimNotifyBattleAbilityEnergyType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBattleAbilityEnergy.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleAbilityEnergy : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEndAnimNotifyBattleAbilityEnergyType Type;
    
    UEndAnimNotifyBattleAbilityEnergy();
};

