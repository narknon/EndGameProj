#pragma once
#include "CoreMinimal.h"
#include "BattleParam.h"
#include "EndBattleAIPcBaseController.h"
#include "EndBattleAIYuffieController.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIYuffieController : public AEndBattleAIPcBaseController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParam AutoPlayBareHandsBattleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParam AutoPlayLinkModeBattleParam;
    
    AEndBattleAIYuffieController();
};

