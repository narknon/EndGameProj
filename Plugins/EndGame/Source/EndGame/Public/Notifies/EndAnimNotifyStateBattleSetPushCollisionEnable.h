#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateBattleSetPushCollisionEnable.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBattleSetPushCollisionEnable : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName CharaPartsSpecID;
    
    UPROPERTY(EditAnywhere)
    bool bEnable;
    
    UEndAnimNotifyStateBattleSetPushCollisionEnable();
};

