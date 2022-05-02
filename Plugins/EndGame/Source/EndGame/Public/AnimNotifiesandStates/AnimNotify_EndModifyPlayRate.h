#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotify_EndModifyPlayRate.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENDGAME_API UAnimNotify_EndModifyPlayRate : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UAnimNotify_EndModifyPlayRate();
};

