#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifySyncProtectStart.generated.h"

UCLASS(CollapseCategories)
class UEndAnimNotifySyncProtectStart : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AbilityID;
    
    UPROPERTY(EditAnywhere)
    bool bAerial;
    
    UEndAnimNotifySyncProtectStart();
};

