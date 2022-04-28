#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateBattleKeep.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UEndAnimNotifyStateBattleKeep : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Value;
    
    UEndAnimNotifyStateBattleKeep();
};

