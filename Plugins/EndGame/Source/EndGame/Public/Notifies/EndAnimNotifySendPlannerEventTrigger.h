#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifySendPlannerEventTrigger.generated.h"

UCLASS(CollapseCategories)
class UEndAnimNotifySendPlannerEventTrigger : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString TriggerId;
    
    UEndAnimNotifySendPlannerEventTrigger();
};

