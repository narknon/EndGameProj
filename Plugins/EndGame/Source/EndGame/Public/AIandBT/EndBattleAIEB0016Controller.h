#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "ERufusGoToDistanceType.h"
#include "ERufusGoToPositionType.h"
#include "ERufusLinkMode.h"
#include "UObject/NoExportTypes.h"
#include "EPlayerType.h"
#include "ERufusGunMode.h"
#include "EndBattleAIEB0016Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEB0016Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FastNextBlendTime;
    
    UPROPERTY(EditAnywhere)
    float FastBeginToLoopBlendTime;
    
    UPROPERTY(EditAnywhere)
    float FastLoopToEndBlendTime;
    
    UPROPERTY(EditAnywhere)
    float rotateLengthTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERufusLinkMode linkMode_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowLinkMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDashPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowGoalPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowGoalRangePoints;
    
    UPROPERTY(EditAnywhere)
    float RangePointsYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideGoalRangePoints_;
    
    AEndBattleAIEB0016Controller();
    UFUNCTION(BlueprintCallable)
    void UsedBullet();
    
    UFUNCTION(BlueprintCallable)
    void SetupBullet(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkMode(ERufusLinkMode linkMode);
    
    UFUNCTION(BlueprintCallable)
    bool RequestReserveActionFastDash(FName keyword, const FVector& goalPosition, float FastMoveSpeed, float missingDistance, float marginDistance, float limitTime, float moveFriction, bool useStartFrontRotate, bool useDeceleration, bool updateGoalPosition, bool drawTargetPoint);
    
    UFUNCTION(BlueprintCallable)
    void ReloadBullet();
    
    UFUNCTION(BlueprintCallable)
    void RegisterGotoPosition(const FVector& Distance);
    
    UFUNCTION(BlueprintCallable)
    void RegisterFastDashEffect(FName CharaSpecName, FName effectFastDashMove);
    
    UFUNCTION(BlueprintCallable)
    void RegisterFastDash(FName keyword, FName startAnimation, FName LoopAnimation, FName endAnimation, float vailableDistance, FName eventNameCompleted, FName eventNameSuspended, FName eventNameTimeOver, FName eventNameHitWall, FName eventNameMissing, FName eventNameArrival, FName eventNameNear);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventFastDash(FName EventName);
    
    UFUNCTION(BlueprintPure)
    FVector GetGotoPosition(EPlayerType PlayerType, ERufusGoToPositionType positionType, ERufusGoToDistanceType DistanceType, float dirYaw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBulletCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLinkMode(ERufusLinkMode linkMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckGunMode(ERufusGunMode gunMode);
    
    UFUNCTION(BlueprintCallable)
    void ChangeGunMode(ERufusGunMode gunMode);
    
};

