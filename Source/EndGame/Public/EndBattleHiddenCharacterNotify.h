#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EndBattleHiddenCharacterNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UEndBattleHiddenCharacterNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool hidden;
    
    UEndBattleHiddenCharacterNotify();
};

