#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBattleHiddenVolumeRelatedBreakable.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleHiddenVolumeRelatedBreakable : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHiddenVolume;
    
    UEndAnimNotifyBattleHiddenVolumeRelatedBreakable();
};

