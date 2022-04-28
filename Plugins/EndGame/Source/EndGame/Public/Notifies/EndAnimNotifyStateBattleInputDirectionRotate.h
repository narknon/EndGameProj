#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateBattleInputDirectionRotate.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UEndAnimNotifyStateBattleInputDirectionRotate : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Angle;
    
    UPROPERTY(EditAnywhere)
    bool bForce;
    
    UEndAnimNotifyStateBattleInputDirectionRotate();
};

