#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AlphaBlend.h"
#include "EndAnimNotifyStateSetExtraRadius.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateSetExtraRadius : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FieldExtraRadius;
    
    UPROPERTY(EditAnywhere)
    float BattleExtraRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlend BlendIn;
    
    UPROPERTY(EditAnywhere)
    float ElapsedTime;
    
    UPROPERTY(EditAnywhere)
    float OriginalFieldExtraRadius;
    
    UPROPERTY(EditAnywhere)
    float OriginalBattleExtraRadius;
    
    UEndAnimNotifyStateSetExtraRadius();
};

