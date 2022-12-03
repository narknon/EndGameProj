#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EndBattleAIEB0021Counter.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAIEB0021Controller.generated.h"

class AEndCharacter;

UCLASS(Blueprintable)
class AEndBattleAIEB0021Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawInBlowArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndBattleAIEB0021Counter> CounterParams;
    
    AEndBattleAIEB0021Controller();
    UFUNCTION(BlueprintCallable)
    void SetHitTerrainDamageSourceName(FName damageSourceName);
    
    UFUNCTION(BlueprintCallable)
    void SetHitTerrainAbilityName(FName abilitiName);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool RequestBlownAway(AEndCharacter* causerCharacter, FName& OutTargetName, FVector& OutTargetLocation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitTerrainEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCounterCheck(FName InTakeAbilityID, FName InTakeMotionID, FName InPlanAction, int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    void DisableCounter();
    
};

