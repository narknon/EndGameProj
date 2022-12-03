#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAIFitSplineController.generated.h"

class AEndBattleAISpline;

UCLASS(Blueprintable)
class AEndBattleAIFitSplineController : public AEndBattleAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FitSplineMinVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FitSplineMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FitSplineAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FitSplineDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FitSplineAccelerationAngularVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FitSplineTurningRollRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FitSplineTurningRollInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FitSplineConnectMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FitSplineConnectUseInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FitSplineUseSplineAnimInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FitSplineConnectUseSplineAnimInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FitSplineUseSplineRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FitSplineBeginMotionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndBattleAISpline* ConnectSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowFindSplineFan;
    
public:
    AEndBattleAIFitSplineController();
    UFUNCTION(BlueprintCallable)
    void SuspendSpline();
    
    UFUNCTION(BlueprintCallable)
    void SetFitSplineVelocity(float InMax, float InMin);
    
    UFUNCTION(BlueprintCallable)
    void SetFitSplineRoll(float InThreashold, float InRate, float InSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetFitSplineAcceleration(float InAcceleration, float InDeceleration);
    
    UFUNCTION(BlueprintCallable)
    void ReserveNextSpline(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void RequestSplineMove(FName InName, FName InMotionName, float InNextPointDistance);
    
    UFUNCTION(BlueprintCallable)
    void RequestOneShotMotion(FName InMotionName);
    
    UFUNCTION(BlueprintCallable)
    void RequestConnectSpline(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeMotion(FName InMotionName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateSplineMove(FName InName, float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuspendSplineMove(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompleteSplineMove(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginSplineMove(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSplineVector(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSplineLocation(FName InName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPrevSprine();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentVelocity();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentSprine();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetConnectGoal();
    
public:
    UFUNCTION(BlueprintCallable)
    FName FindNearestSplineNodeName(float InFanAngle, float InFanRadiusMin, float InFanRadiusMax, FName InSocketName, float& NextPointDistance, FName InGroupName);
    
    UFUNCTION(BlueprintCallable)
    bool FindNearestSplineNodeLocation(FName& OutSplineNodeName, FVector& OutPointLocation, float& OutNextPointDistance, float InFanAngle, float InFanRadiusMin, float InFanRadiusMax, FName InSocketName, FName InGroupName);
    
    UFUNCTION(BlueprintCallable)
    AEndBattleAISpline* FindNearestSplineNodeActor(float InFanAngle, float InFanRadiusMin, float InFanRadiusMax, FName InSocketName, float& NextPointDistance, FName InGroupName);
    
};

