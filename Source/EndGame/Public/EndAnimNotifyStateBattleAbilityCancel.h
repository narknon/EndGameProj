#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EndAnimNotifyStateBattleAbilityCancel.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UEndAnimNotifyStateBattleAbilityCancel : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CancelNumbers;
    
    UEndAnimNotifyStateBattleAbilityCancel();
};

