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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastMoveRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastMoveLoopAngleQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastMoveFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastNextBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastBeginToLoopBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

