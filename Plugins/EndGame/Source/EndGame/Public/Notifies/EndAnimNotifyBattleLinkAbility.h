#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyBattleLinkAbility.generated.h"

UCLASS(CollapseCategories)
class UEndAnimNotifyBattleLinkAbility : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AbilityID;
    
    UPROPERTY(EditAnywhere)
    bool bSupport;
    
    UPROPERTY(EditAnywhere)
    bool bAerial;
    
    UPROPERTY(EditAnywhere)
    bool bDoWithoutTarget;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreLinkMode;
    
    UPROPERTY(EditAnywhere)
    bool bInstance;
    
    UPROPERTY(EditAnywhere)
    FName SpecifiedAbilityID;
    
    UEndAnimNotifyBattleLinkAbility();
};

