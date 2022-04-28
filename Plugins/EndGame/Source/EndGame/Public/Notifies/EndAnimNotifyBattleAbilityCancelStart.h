#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBattleAbilityCancelStart.generated.h"

UCLASS(CollapseCategories)
class UEndAnimNotifyBattleAbilityCancelStart : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<int32> CancelNumbers;
    
    UEndAnimNotifyBattleAbilityCancelStart();
};

