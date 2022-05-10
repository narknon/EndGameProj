#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EndAnimNotifyBattleAbilityCancelStart.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UEndAnimNotifyBattleAbilityCancelStart : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CancelNumbers;
    
    UEndAnimNotifyBattleAbilityCancelStart();
};

