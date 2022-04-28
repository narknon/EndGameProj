#pragma once
#include "CoreMinimal.h"
#include "EEndLookAtModifierType.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotify_EndModifyLookAt.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UAnimNotify_EndModifyLookAt : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEndLookAtModifierType ModifierType;
    
    UPROPERTY(EditAnywhere)
    bool bForceEnableLookAtMeshSpace;
    
    UPROPERTY(EditAnywhere)
    float WeightBias;
    
    UPROPERTY(EditAnywhere)
    float WeightBiasBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float WeightBiasBlendOutTime;
    
    UAnimNotify_EndModifyLookAt();
};

