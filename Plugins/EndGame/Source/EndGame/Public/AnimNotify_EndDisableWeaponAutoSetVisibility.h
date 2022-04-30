#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotify_EndDisableWeaponAutoSetVisibility.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENDGAME_API UAnimNotify_EndDisableWeaponAutoSetVisibility : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotify_EndDisableWeaponAutoSetVisibility();
};

