#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AlphaBlend.h"
#include "EndAnimNotifyStateFieldExtraRadius.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateFieldExtraRadius : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ExtraRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlend BlendIn;
    
    UPROPERTY(EditAnywhere)
    float ElapsedTime;
    
    UPROPERTY(EditAnywhere)
    float OriginalFieldExtraRadius;
    
    UPROPERTY(EditAnywhere)
    float OriginalBattleExtraRadius;
    
    UEndAnimNotifyStateFieldExtraRadius();
};

