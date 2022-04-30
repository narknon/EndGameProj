#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotify_EndOverrideAttackDirection.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENDGAME_API UAnimNotify_EndOverrideAttackDirection : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Yaw;
    
    UPROPERTY(EditAnywhere)
    float Pitch;
    
    UAnimNotify_EndOverrideAttackDirection();
};

