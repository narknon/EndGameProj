#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_EndModifyWeaponVisibility.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UAnimNotify_EndModifyWeaponVisibility : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bVisible;
    
    UAnimNotify_EndModifyWeaponVisibility();
};

