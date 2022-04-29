#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateBattleAddSpecialStatusChange.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBattleAddSpecialStatusChange : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SpecialStatusChangeID;
    
    UEndAnimNotifyStateBattleAddSpecialStatusChange();
};

