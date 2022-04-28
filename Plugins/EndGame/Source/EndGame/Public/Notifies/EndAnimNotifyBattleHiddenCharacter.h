#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBattleHiddenCharacter.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleHiddenCharacter : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool enableHiddenCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool enableInfluenceChildren;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool enableInfluenceWeapons;
    
    UEndAnimNotifyBattleHiddenCharacter();
};

