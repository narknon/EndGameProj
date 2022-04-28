#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EEndBikeKeepRelativePositionType.h"
#include "EndAnimNotifyStateBikeKeepRelativePosition.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikeKeepRelativePosition : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    EEndBikeKeepRelativePositionType Type;
    
    UPROPERTY(EditInstanceOnly)
    float Position;
    
public:
    UEndAnimNotifyStateBikeKeepRelativePosition();
};

