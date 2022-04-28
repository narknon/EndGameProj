#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateBattleAbilityCorrectionInvalid.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UEndAnimNotifyStateBattleAbilityCorrectionInvalid : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Distance;
    
    UPROPERTY(EditAnywhere)
    bool Direction;
    
    UEndAnimNotifyStateBattleAbilityCorrectionInvalid();
};

