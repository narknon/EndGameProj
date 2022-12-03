#pragma once
#include "CoreMinimal.h"
#include "EFastDashGoToDistanceType.h"
#include "EndBattleAILineWarpController.h"
#include "UObject/NoExportTypes.h"
#include "EPlayerType.h"
#include "EFastDashGoToPositionType.h"
#include "EndBattleAIEB1005Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEB1005Controller : public AEndBattleAILineWarpController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastNextBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastBeginToLoopBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastLoopToEndBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rotateLengthTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDashPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowGoalPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowGoalRangePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangePointsYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideGoalRangePoints;
    
    AEndBattleAIEB1005Controller();
protected:
    UFUNCTION(BlueprintCallable)
    bool RequestReserveActionFastDash(FName InKeyword, const FVector& InGoalPosition, float InFastMoveSpeed, float InMissingDistance, float InMarginDistance, float InLimitTime, float InMoveFriction, bool InUseStartFrontRotate, bool InUseDeceleration, bool InUpdateGoalPosition, bool InDrawTargetPoint);
    
    UFUNCTION(BlueprintCallable)
    void RegisterFastDashGotoPosition(const FVector& InDistance);
    
    UFUNCTION(BlueprintCallable)
    void RegisterFastDashEffect(FName InCharaSpecName, FName InEffectFastDashMove);
    
    UFUNCTION(BlueprintCallable)
    void RegisterFastDash(FName InKeyword, FName InStartAnimation, FName InLoopAnimation, FName InEndAnimation, float InVailableDistance, FName InEventNameCompleted, FName InEventNameSuspended, FName InEventNameTimeOver, FName InEventNameHitWall, FName InEventNameMissing, FName InEventNameArrival, FName InEventNameNear);
    
    UFUNCTION(BlueprintCallable)
    void OverwriteGoalPositionFastDash(FName InKeyword, const FVector& InGoalPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventFastDash(FName InEventName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFastDashGotoPosition(EPlayerType InPlayerType, EFastDashGoToPositionType InPositionType, EFastDashGoToDistanceType InDistanceType, float InDirYaw);
    
};

