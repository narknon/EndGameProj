#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBattleSceneMessage.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleSceneMessage : public UAnimNotify {
    GENERATED_BODY()
public:
    UEndAnimNotifyBattleSceneMessage();
};

