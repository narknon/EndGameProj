#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EEndTerminalModifierType.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_EndModifyTerminal.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UAnimNotify_EndModifyTerminal : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEndTerminalModifierType ModifierType;
    
    UAnimNotify_EndModifyTerminal();
};

