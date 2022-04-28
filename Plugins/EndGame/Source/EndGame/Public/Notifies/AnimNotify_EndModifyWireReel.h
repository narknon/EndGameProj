#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EEndWireReelModifierType.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_EndModifyWireReel.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UAnimNotify_EndModifyWireReel : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEndWireReelModifierType ModifierType;
    
    UPROPERTY(EditAnywhere)
    FName Param01;
    
    UAnimNotify_EndModifyWireReel();
};

