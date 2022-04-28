#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBattlePlayBattleCameraSequence.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattlePlayBattleCameraSequence : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BattleCameraSequenceID;
    
    UEndAnimNotifyBattlePlayBattleCameraSequence();
};

