#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIFitSplineController.h"
#include "EndBattleAIEB1000Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEB1000Controller : public AEndBattleAIFitSplineController {
    GENERATED_BODY()
public:
    AEndBattleAIEB1000Controller();
private:
    UFUNCTION(BlueprintCallable)
    void DeactivateCameraFlavorCustomizableFieldAction();
    
    UFUNCTION(BlueprintCallable)
    void ActivateCameraFlavorCustomizableFieldAction(FName DatatableName);
    
};

