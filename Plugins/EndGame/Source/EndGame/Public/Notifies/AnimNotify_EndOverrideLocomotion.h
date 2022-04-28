#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EEndLocomotionAnim.h"
#include "AnimNotifyStructs.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_EndOverrideLocomotion.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UAnimNotify_EndOverrideLocomotion : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEndLocomotionAnim TargetAnim;
    
    UPROPERTY(EditAnywhere)
    TArray<FEndOverrideLocomotionSetting> Settings;
    
    UPROPERTY(EditAnywhere)
    float OverrideIntervalMin;
    
    UAnimNotify_EndOverrideLocomotion();
};

