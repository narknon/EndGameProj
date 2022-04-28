#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EEndBattleSpecialStatusChangeType.h"
#include "EndAnimNotifyBattleSetSpecialStatusChangeState.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleSetSpecialStatusChangeState : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEndBattleSpecialStatusChangeType Type;
    
    UPROPERTY(EditAnywhere)
    FName StateChangeID;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ParamIDs;
    
    UEndAnimNotifyBattleSetSpecialStatusChangeState();
};

