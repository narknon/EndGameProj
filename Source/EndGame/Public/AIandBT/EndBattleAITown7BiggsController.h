#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIPcBaseController.h"
#include "EndBattleAITown7BiggsController.generated.h"

UCLASS(Blueprintable)
class AEndBattleAITown7BiggsController : public AEndBattleAIPcBaseController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
public:
    AEndBattleAITown7BiggsController();
};

