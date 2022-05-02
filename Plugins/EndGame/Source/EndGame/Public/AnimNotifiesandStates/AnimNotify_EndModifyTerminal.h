#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EEndTerminalModifierType.h"
#include "AnimNotify_EndModifyTerminal.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ENDGAME_API UAnimNotify_EndModifyTerminal : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndTerminalModifierType ModifierType;
    
    UAnimNotify_EndModifyTerminal();
};

