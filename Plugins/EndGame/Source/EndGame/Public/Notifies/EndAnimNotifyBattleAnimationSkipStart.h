#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBattleAnimationSkipStart.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleAnimationSkipStart : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CancelNumber;
    
    UEndAnimNotifyBattleAnimationSkipStart();
};

