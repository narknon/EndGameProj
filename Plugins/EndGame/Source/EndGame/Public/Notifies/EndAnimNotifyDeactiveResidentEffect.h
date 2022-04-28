#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EEndDeactiveResidentEffectType.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EndAnimNotifyDeactiveResidentEffect.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyDeactiveResidentEffect : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EEndDeactiveResidentEffectType DeactiveType;
    
    UEndAnimNotifyDeactiveResidentEffect();
};

