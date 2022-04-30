#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EndAnimNotifyStateBikeCameraRoll.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikeCameraRoll : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float RollAngle;
    
    UPROPERTY(EditAnywhere)
    float TurningPointRatio;
    
    UPROPERTY(EditAnywhere)
    float InterpExp;
    
public:
    UEndAnimNotifyStateBikeCameraRoll();
};

