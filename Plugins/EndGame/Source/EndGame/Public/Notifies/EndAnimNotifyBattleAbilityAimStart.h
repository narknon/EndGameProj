#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBattleAbilityAimStart.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleAbilityAimStart : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectorSettingNames;
    
    UEndAnimNotifyBattleAbilityAimStart();
};

