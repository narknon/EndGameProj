#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBattleDamageAssist.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleDamageAssist : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString DamageSourceID;
    
    UEndAnimNotifyBattleDamageAssist();
};

