#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPlayerType.h"
#include "EPraecoMiniGoToMode.h"
#include "EPraecoMiniGoToDistanceType.h"
#include "EPraecoMiniGoToPositionType.h"
#include "EndBattleAIEB0029Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEB0029Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastNextBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastBeginToLoopBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastLoopToEndBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rotateLengthTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDashPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowGoalPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowGoalRangePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangePointsYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideGoalRangePoints_;
    
    AEndBattleAIEB0029Controller();
    UFUNCTION(BlueprintCallable)
    bool RequestReserveActionTransAttach(FName InSocket, FTransform InTargetTransform, float InDuration, FName InName);
    
    UFUNCTION(BlueprintCallable)
    bool RequestReserveActionFastDash(FName keyword, const FVector& goalPosition, float FastMoveSpeed, float missingDistance, float marginDistance, float limitTime, float moveFriction, bool useStartFrontRotate, bool useDeceleration, bool updateGoalPosition, bool drawTargetPoint);
    
    UFUNCTION(BlueprintCallable)
    void RegisterGotoPosition(const FVector& Distance);
    
    UFUNCTION(BlueprintCallable)
    void RegisterFastDashEffect(FName CharaSpecName, FName effectFastDashMove);
    
    UFUNCTION(BlueprintCallable)
    void RegisterFastDash(FName keyword, FName startAnimation, FName LoopAnimation, FName endAnimation, float vailableDistance, FName eventNameCompleted, FName eventNameSuspended, FName eventNameTimeOver, FName eventNameHitWall, FName eventNameMissing, FName eventNameArrival, FName eventNameNear);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventFastDash(FName EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompleteTransAttach(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGotoPosition(EPlayerType PlayerType, EPraecoMiniGoToPositionType positionType, EPraecoMiniGoToDistanceType DistanceType, float dirYaw, EPraecoMiniGoToMode gotoMode);
    
};

