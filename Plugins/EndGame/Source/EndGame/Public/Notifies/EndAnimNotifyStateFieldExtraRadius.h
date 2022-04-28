#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AlphaBlend -FallbackName=AlphaBlend
#include "EndAnimNotifyStateFieldExtraRadius.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateFieldExtraRadius : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    float ExtraRadius;
    
    UPROPERTY(EditInstanceOnly)
    FAlphaBlend BlendIn;
    
    UPROPERTY()
    float ElapsedTime;
    
    UPROPERTY()
    float OriginalFieldExtraRadius;
    
    UPROPERTY()
    float OriginalBattleExtraRadius;
    
    UEndAnimNotifyStateFieldExtraRadius();
};

