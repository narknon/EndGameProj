#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateBikeDisableAddBlend.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikeDisableAddBlend : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    float BlendOutTime;
    
    UPROPERTY(EditInstanceOnly)
    float BlendInTime;
    
    UPROPERTY(EditInstanceOnly)
    int32 Priority;
    
    UEndAnimNotifyStateBikeDisableAddBlend();
};

