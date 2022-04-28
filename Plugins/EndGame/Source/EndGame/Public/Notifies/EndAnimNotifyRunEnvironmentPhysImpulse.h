#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EEndEnvironmentPhysForceScale.h"
#include "EndAnimNotifyRunEnvironmentPhysImpulse.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyRunEnvironmentPhysImpulse : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEndEnvironmentPhysForceScale ImpulseScale;
    
    UEndAnimNotifyRunEnvironmentPhysImpulse();
};

