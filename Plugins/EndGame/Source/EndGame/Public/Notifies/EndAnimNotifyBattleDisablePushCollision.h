#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBattleDisablePushCollision.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleDisablePushCollision : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName name_;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool disable_;
    
    UEndAnimNotifyBattleDisablePushCollision();
};

