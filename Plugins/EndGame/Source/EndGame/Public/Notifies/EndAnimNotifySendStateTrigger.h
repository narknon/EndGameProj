#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifySendStateTrigger.generated.h"

UCLASS(CollapseCategories)
class UEndAnimNotifySendStateTrigger : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString StateTriggerName;
    
    UEndAnimNotifySendStateTrigger();
};

