#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EndPlayBlendSpaceActionActorInterface.h"
#include "EndBattleAIEN2010Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEN2010Controller : public AEndBattleAIController, public IEndPlayBlendSpaceActionActorInterface {
    GENERATED_BODY()
public:
    AEndBattleAIEN2010Controller();
    float OnGetCurrentBlendSpaceInput_Implementation();
    // Fix for true pure virtual functions not being implemented
};

