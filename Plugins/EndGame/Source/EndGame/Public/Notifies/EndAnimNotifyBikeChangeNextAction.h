#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBikeChangeNextAction.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBikeChangeNextAction : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAbility;
    
    UPROPERTY(EditAnywhere)
    bool bAccel;
    
    UEndAnimNotifyBikeChangeNextAction();
};

