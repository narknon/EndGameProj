#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateSeadEventTrigger.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateSeadEventTrigger : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName OnBeginSeadEventID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName OnEndSeadEventID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsePrefixOwnerID: 1;
    
    UEndAnimNotifyStateSeadEventTrigger();
};

