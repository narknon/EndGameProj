#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AlphaBlend -FallbackName=AlphaBlend
#include "EndAnimNotifyStateSetExtraRadius.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateSetExtraRadius : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    float FieldExtraRadius;
    
    UPROPERTY(EditInstanceOnly)
    float BattleExtraRadius;
    
    UPROPERTY(EditInstanceOnly)
    FAlphaBlend BlendIn;
    
    UPROPERTY()
    float ElapsedTime;
    
    UPROPERTY()
    float OriginalFieldExtraRadius;
    
    UPROPERTY()
    float OriginalBattleExtraRadius;
    
    UEndAnimNotifyStateSetExtraRadius();
};

