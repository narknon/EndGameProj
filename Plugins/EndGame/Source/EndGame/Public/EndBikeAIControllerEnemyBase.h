#pragma once
#include "CoreMinimal.h"
#include "EndBikeAIController.h"
#include "EndBikeEnemySwitchAbilitySetByDamage.h"
#include "EndBikeAIControllerEnemyBase.generated.h"

UCLASS(Abstract, Blueprintable)
class AEndBikeAIControllerEnemyBase : public AEndBikeAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndBikeEnemySwitchAbilitySetByDamage> mSwitchAbilitySetByDamage;
    
public:
    AEndBikeAIControllerEnemyBase();
};

