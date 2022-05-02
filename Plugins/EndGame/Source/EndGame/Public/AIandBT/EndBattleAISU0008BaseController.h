#pragma once
#include "CoreMinimal.h"
#include "EndBattleAISummonBaseController.h"
#include "EndBattleAISU0008BaseController.generated.h"

UCLASS(Blueprintable)
class AEndBattleAISU0008BaseController : public AEndBattleAISummonBaseController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DashDamageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RunJumpAnimationName;
    
    UPROPERTY(EditAnywhere)
    float DoJumpDistance;
    
    UPROPERTY(EditAnywhere)
    float DoJumpHeight;
    
    UPROPERTY(EditAnywhere)
    float JumpIntervalTime;
    
public:
    AEndBattleAISU0008BaseController();
};

