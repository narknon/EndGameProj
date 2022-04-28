#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateBikeCameraRoll.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikeCameraRoll : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    float RollAngle;
    
    UPROPERTY(EditInstanceOnly)
    float TurningPointRatio;
    
    UPROPERTY(EditInstanceOnly)
    float InterpExp;
    
public:
    UEndAnimNotifyStateBikeCameraRoll();
};

