#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyModifyMovementMode.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UEndAnimNotifyModifyMovementMode : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bMovable;
    
    UPROPERTY(EditAnywhere)
    bool bHitWall;
    
    UPROPERTY(EditAnywhere)
    bool bHitObject;
    
    UPROPERTY(EditAnywhere)
    bool bFitFloor;
    
    UPROPERTY(EditAnywhere)
    bool bMaxWeight;
    
    UPROPERTY(EditAnywhere)
    bool bForceUpdateLanding;
    
    UEndAnimNotifyModifyMovementMode();
};

