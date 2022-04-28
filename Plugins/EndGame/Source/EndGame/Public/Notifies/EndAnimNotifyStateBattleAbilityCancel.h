#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateBattleAbilityCancel.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UEndAnimNotifyStateBattleAbilityCancel : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<int32> CancelNumbers;
    
    UEndAnimNotifyStateBattleAbilityCancel();
};

