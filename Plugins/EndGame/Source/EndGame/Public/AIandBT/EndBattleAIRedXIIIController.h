#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIRedXIIIAttackAbility.h"
#include "EndBattleAIPcBaseController.h"
#include "EndBattleAIRedXIIIController.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIRedXIIIController : public AEndBattleAIPcBaseController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StarDustLayAbilityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HealAbilityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AttackAbilityIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndBattleAIRedXIIIAttackAbility> AttackAbilityList;
    
    UPROPERTY(EditAnywhere)
    float StarDustLayProb;
    
    UPROPERTY(EditAnywhere)
    float StarDustLayCoolTime;
    
    UPROPERTY(EditAnywhere)
    float HealCheckInterval;
    
    UPROPERTY(EditAnywhere)
    float HealProb;
    
    UPROPERTY(EditAnywhere)
    float HealCoolTime;
    
public:
    AEndBattleAIRedXIIIController();
};

