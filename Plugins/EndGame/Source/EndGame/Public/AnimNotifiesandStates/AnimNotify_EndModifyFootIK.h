#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EEndFootIKModifierType.h"
#include "AnimNotify_EndModifyFootIK.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENDGAME_API UAnimNotify_EndModifyFootIK : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndFootIKModifierType ModifierType;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UAnimNotify_EndModifyFootIK();
};

