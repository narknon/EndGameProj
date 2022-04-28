#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EEndBikeRotateYawType.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EndAnimNotifyStateBikeRotateYaw.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikeRotateYaw : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    EEndBikeRotateYawType Type;
    
    UPROPERTY(EditInstanceOnly)
    bool bUseAcceleration;
    
    UPROPERTY(EditInstanceOnly)
    float RotateSpeed;
    
    UPROPERTY(EditInstanceOnly)
    float RotateMaxSpeed;
    
    UPROPERTY(EditInstanceOnly)
    float RotateAcceleration;
    
    UPROPERTY(EditInstanceOnly)
    float RotateArrivalTime;
    
    UPROPERTY(EditInstanceOnly)
    float FloatParam1;
    
    UPROPERTY(EditInstanceOnly)
    FName IdParam1;
    
    UEndAnimNotifyStateBikeRotateYaw();
};

