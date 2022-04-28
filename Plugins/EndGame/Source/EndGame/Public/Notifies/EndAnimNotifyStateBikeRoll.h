#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateBikeRoll.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikeRoll : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    float RollAngle;
    
    UEndAnimNotifyStateBikeRoll();
};

