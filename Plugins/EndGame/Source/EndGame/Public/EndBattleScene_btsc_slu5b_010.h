#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EndBattleSceneBlueprint.h"
#include "EndBattleScene_btsc_slu5b_010.generated.h"

class AEndBattleAISlu5bAerithController;
class AActor;

UCLASS(Blueprintable)
class AEndBattleScene_btsc_slu5b_010 : public AEndBattleSceneBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEndBattleAISlu5bAerithController> GuestAerithBattleAIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndBattleAISlu5bAerithController* AerithAIController;
    
    AEndBattleScene_btsc_slu5b_010();
    UFUNCTION(BlueprintCallable)
    void ReleaseSpark(AActor* mineActor, int32 sparkID);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmSpark(AActor* mineActor, int32 sparkID);
    
};

