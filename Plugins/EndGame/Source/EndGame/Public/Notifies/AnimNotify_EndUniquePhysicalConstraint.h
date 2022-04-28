#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotify_EndUniquePhysicalConstraint.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UAnimNotify_EndUniquePhysicalConstraint : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName UniqueSettingName;
    
    UPROPERTY(EditAnywhere)
    bool bPostSetting;
    
    UAnimNotify_EndUniquePhysicalConstraint();
};

