#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EndAnimNotifyStateBikeAllyMove.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikeAllyMove : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 EnabledHitCount;
    
    UPROPERTY(EditAnywhere)
    float MileageOffset;
    
    UEndAnimNotifyStateBikeAllyMove();
};

