#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EEndBattleSpecialStatusChangeType.h"
#include "EndAnimNotifyStateBattleSetSpecialStatusChangeState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBattleSetSpecialStatusChangeState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEndBattleSpecialStatusChangeType Type;
    
    UPROPERTY(EditAnywhere)
    FName BeginStateChangeID;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> BeginParamIDs;
    
    UPROPERTY(EditAnywhere)
    FName EndStateChangeID;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EndParamIDs;
    
    UEndAnimNotifyStateBattleSetSpecialStatusChangeState();
};

