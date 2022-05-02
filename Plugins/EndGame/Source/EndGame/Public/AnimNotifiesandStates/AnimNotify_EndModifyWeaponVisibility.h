#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_EndModifyWeaponVisibility.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ENDGAME_API UAnimNotify_EndModifyWeaponVisibility : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    UAnimNotify_EndModifyWeaponVisibility();
};

