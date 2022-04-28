#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateBikePositioning.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikePositioning : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    bool bEnable_Forward;
    
    UPROPERTY(EditInstanceOnly)
    float PositionOffset_Forward;
    
    UPROPERTY(EditInstanceOnly)
    float PositioningSpeed_Forward;
    
    UPROPERTY(EditInstanceOnly)
    bool bEnable_Right;
    
    UPROPERTY(EditInstanceOnly)
    float PositionOffset_Right;
    
    UPROPERTY(EditInstanceOnly)
    float PositioningSpeed_Right;
    
public:
    UEndAnimNotifyStateBikePositioning();
};

