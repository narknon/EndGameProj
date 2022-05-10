#pragma once
#include "CoreMinimal.h"
#include "EndBattleAISummonBaseController.h"
#include "EndBattleAISU0003BaseController.generated.h"

UCLASS(Blueprintable)
class AEndBattleAISU0003BaseController : public AEndBattleAISummonBaseController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RollAbilityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RollBackAbilityID;
    
    UPROPERTY(EditAnywhere)
    float AbilityTurnAngle;
    
    UPROPERTY(EditAnywhere)
    float RollBackAngle;
    
public:
    AEndBattleAISU0003BaseController();
};

