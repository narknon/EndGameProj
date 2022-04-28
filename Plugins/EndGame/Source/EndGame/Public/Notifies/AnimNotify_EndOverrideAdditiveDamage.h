#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotify_EndOverrideAdditiveDamage.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UAnimNotify_EndOverrideAdditiveDamage : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPlayAnimation;
    
    UPROPERTY(EditAnywhere)
    FName AnimationName;
    
    UAnimNotify_EndOverrideAdditiveDamage();
};

