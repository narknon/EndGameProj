#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EndAnimNotifyStateBattlePressedButton.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UEndAnimNotifyStateBattlePressedButton : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Power;
    
    UPROPERTY(EditAnywhere)
    float MaxPower;
    
    UEndAnimNotifyStateBattlePressedButton();
};

