#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EndAnimNotifySyncProtectStart.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UEndAnimNotifySyncProtectStart : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerial;
    
    UEndAnimNotifySyncProtectStart();
};

