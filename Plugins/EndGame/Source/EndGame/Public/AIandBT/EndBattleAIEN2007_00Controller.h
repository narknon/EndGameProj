#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EndBattleAIEN2007_00Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEN2007_00Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    AEndBattleAIEN2007_00Controller();
protected:
    UFUNCTION(BlueprintCallable)
    void SetNextSmogDash(float InDistance, float InAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestSmogDash(int32 InCount);
    
};

