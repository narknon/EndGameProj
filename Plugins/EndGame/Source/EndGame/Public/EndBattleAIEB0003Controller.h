#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAIEB0003Controller.generated.h"

class AEndBattleAIEB0003MineController;

UCLASS(Blueprintable)
class AEndBattleAIEB0003Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float FastMoveSpeed;
    
    UPROPERTY(EditAnywhere)
    float FastMoveRange;
    
    UPROPERTY(EditAnywhere)
    float FastMoveLoopAngleQuantity;
    
    UPROPERTY(EditAnywhere)
    float FastMoveFriction;
    
    UPROPERTY(EditAnywhere)
    float FastNextBlendTime;
    
    UPROPERTY(EditAnywhere)
    float FastBeginToLoopBlendTime;
    
    UPROPERTY(EditAnywhere)
    float FastLoopToEndBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FastMoveStartAnimRotate;
    
public:
    AEndBattleAIEB0003Controller();
protected:
    UFUNCTION(BlueprintCallable)
    void StopFlashDashEffect();
    
    UFUNCTION(BlueprintCallable)
    void SetNextFlashDashPoint(FVector Point);
    
    UFUNCTION(BlueprintCallable)
    void SetNextFastPoint(FVector Point);
    
    UFUNCTION(BlueprintCallable)
    void PlayEffectOnce(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuspendFlushDash();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestFlashDash(int32 InFlashDashCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadySpark(int32 sparkID, const FVector& centerPos, const TArray<AEndBattleAIEB0003MineController*>& mineAIList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInConfirmSpark();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishRollingAtack();
    
    UFUNCTION(BlueprintCallable)
    void CleanFlashDash();
    
};

