#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EEndLocomotionAnim.h"
#include "AnimNotifyState_EndResetOverrideLocomotion.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENDGAME_API UAnimNotifyState_EndResetOverrideLocomotion : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndLocomotionAnim TargetAnim;
    
    UAnimNotifyState_EndResetOverrideLocomotion();
};

