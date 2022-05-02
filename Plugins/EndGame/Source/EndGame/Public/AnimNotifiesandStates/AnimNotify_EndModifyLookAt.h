#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EEndLookAtModifierType.h"
#include "AnimNotify_EndModifyLookAt.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENDGAME_API UAnimNotify_EndModifyLookAt : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndLookAtModifierType ModifierType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceEnableLookAtMeshSpace;
    
    UPROPERTY(EditAnywhere)
    float WeightBias;
    
    UPROPERTY(EditAnywhere)
    float WeightBiasBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float WeightBiasBlendOutTime;
    
    UAnimNotify_EndModifyLookAt();
};

