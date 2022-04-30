#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EBattleAbilityInterpolationType.h"
#include "EBattleAbilityRotateStartType.h"
#include "EBattleAbilityRotateNotifyState.h"
#include "EndBattleAbilityRotateState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UEndBattleAbilityRotateState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBattleAbilityRotateNotifyState::Type> Type;
    
    UPROPERTY(EditAnywhere)
    float StartAngle;
    
    UPROPERTY(EditAnywhere)
    float GoalAngle;
    
    UPROPERTY(EditAnywhere)
    float RotateVelocity;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBattleAbilityRotateStartType::Type> StartType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBattleAbilityInterpolationType::Type> InterpolationType;
    
    UPROPERTY(EditAnywhere)
    float FrameDeltaTimeSpeed;
    
    UEndBattleAbilityRotateState();
};

