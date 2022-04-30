#pragma once
#include "CoreMinimal.h"
#include "EndBattleAISummonBaseController.h"
#include "RageDush.h"
#include "EndBattleAISU0001BaseController.generated.h"

class AEndCharacter;

UCLASS(Blueprintable)
class AEndBattleAISU0001BaseController : public AEndBattleAISummonBaseController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoogleBombHoldingStartAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoogleBombHoldingIdleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRageDush RageDushHandler;
    
    AEndBattleAISU0001BaseController();
    UFUNCTION(BlueprintCallable)
    void SetTarget(AEndCharacter* InChara);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetMoogleBombHidden(bool IsHidden);
    
};

