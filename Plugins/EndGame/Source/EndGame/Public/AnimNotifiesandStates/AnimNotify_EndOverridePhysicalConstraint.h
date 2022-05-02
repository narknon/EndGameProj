#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotify_EndOverridePhysicalConstraint.generated.h"

class UEndPhysicalConstraintSetting;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENDGAME_API UAnimNotify_EndOverridePhysicalConstraint : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndPhysicalConstraintSetting* Constraint;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UAnimNotify_EndOverridePhysicalConstraint();
};

