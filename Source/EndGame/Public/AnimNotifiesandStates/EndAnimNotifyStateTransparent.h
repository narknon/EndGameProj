#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EndAnimNotifyStateTransparent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateTransparent : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TurnTransparentTime;
    
    UPROPERTY(EditAnywhere)
    float TurnOpaqueTime;
    
    UEndAnimNotifyStateTransparent();
};

