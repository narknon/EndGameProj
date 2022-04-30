#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EEndBattleCharaAttachCharacterType.h"
#include "EndBattleAIEB0002Controller.generated.h"

class AEndEmitter;

UCLASS(Blueprintable)
class AEndBattleAIEB0002Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEndEmitter*> Vernier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugShowSocketWayPoint;
    
public:
    AEndBattleAIEB0002Controller();
private:
    UFUNCTION(BlueprintCallable)
    void OnRemoveStatusChangeStopToChildCharacter();
    
    UFUNCTION(BlueprintCallable)
    void OnDetachArms();
    
    UFUNCTION(BlueprintCallable)
    void OnDetachArm(EEndBattleCharaAttachCharacterType armType);
    
};

