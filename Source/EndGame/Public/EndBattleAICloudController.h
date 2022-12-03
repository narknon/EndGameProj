#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIPcBaseController.h"
#include "BattleParam.h"
#include "EndBattleAICloudController.generated.h"

UCLASS(Blueprintable)
class AEndBattleAICloudController : public AEndBattleAIPcBaseController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParam BraveBattleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatDistanceBatBrave;
    
public:
    AEndBattleAICloudController();
};

