#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotify_EndOverridePhysicalConstraint.generated.h"

class UEndPhysicalConstraintSetting;

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UAnimNotify_EndOverridePhysicalConstraint : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UEndPhysicalConstraintSetting* Constraint;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UAnimNotify_EndOverridePhysicalConstraint();
};

