#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifySeadEventTrigger.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifySeadEventTrigger : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SeadEventID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsePrefixOwnerID: 1;
    
    UEndAnimNotifySeadEventTrigger();
};

