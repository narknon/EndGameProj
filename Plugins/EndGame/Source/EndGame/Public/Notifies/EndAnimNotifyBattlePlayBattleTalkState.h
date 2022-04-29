#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBattlePlayBattleTalkState.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattlePlayBattleTalkState : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TalkStateId;
    
    UEndAnimNotifyBattlePlayBattleTalkState();
};

