#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateBattlePressedButton.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UEndAnimNotifyStateBattlePressedButton : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Power;
    
    UPROPERTY(EditAnywhere)
    float MaxPower;
    
    UEndAnimNotifyStateBattlePressedButton();
};

