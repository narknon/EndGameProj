#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateBikeMoveStatusUI.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikeMoveStatusUI : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FName SocketName;
    
    UPROPERTY(EditInstanceOnly)
    float ZOffset;
    
    UPROPERTY(EditInstanceOnly)
    float MoveInTime;
    
    UPROPERTY(EditInstanceOnly)
    float MoveOutTime;
    
    UEndAnimNotifyStateBikeMoveStatusUI();
};

