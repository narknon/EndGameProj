#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotify_EndDisableWeaponAutoSetVisibility.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UAnimNotify_EndDisableWeaponAutoSetVisibility : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotify_EndDisableWeaponAutoSetVisibility();
};

