#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EEndEnvironmentPhysForceScale.h"
#include "EndAnimNotifyRunEnvironmentPhysImpulse.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ENDGAME_API UEndAnimNotifyRunEnvironmentPhysImpulse : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndEnvironmentPhysForceScale ImpulseScale;
    
    UEndAnimNotifyRunEnvironmentPhysImpulse();
};

