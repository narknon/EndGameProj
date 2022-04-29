#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateTransparent.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateTransparent : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    float TurnTransparentTime;
    
    UPROPERTY(EditInstanceOnly)
    float TurnOpaqueTime;
    
    UEndAnimNotifyStateTransparent();
};

