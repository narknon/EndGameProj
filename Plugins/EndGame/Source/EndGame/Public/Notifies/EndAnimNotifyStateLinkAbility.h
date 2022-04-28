#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateLinkAbility.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UEndAnimNotifyStateLinkAbility : public UAnimNotifyState {
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
    bool bInstance;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreLinkMode;
    
    UPROPERTY(EditAnywhere)
    FName SpecifiedAbilityID;
    
    UEndAnimNotifyStateLinkAbility();
};

