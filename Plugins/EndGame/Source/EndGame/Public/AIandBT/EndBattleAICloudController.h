#pragma once
#include "CoreMinimal.h"
#include "BattleParam.h"
#include "EndBattleAIPcBaseController.h"
#include "EndBattleAICloudController.generated.h"

UCLASS(Blueprintable)
class AEndBattleAICloudController : public AEndBattleAIPcBaseController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParam BraveBattleParam;
    
    UPROPERTY(EditAnywhere)
    float CombatDistanceBatBrave;
    
public:
    AEndBattleAICloudController();
};

