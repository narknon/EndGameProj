#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EDarknationLinkMode.h"
#include "EndBattleAIEB0017Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEB0017Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDarknationLinkMode linkMode_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool debugDrawLinkMode;
    
    AEndBattleAIEB0017Controller();
    UFUNCTION(BlueprintCallable)
    void SetLinkMode(EDarknationLinkMode linkMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLinkMode(EDarknationLinkMode linkMode);
    
};

