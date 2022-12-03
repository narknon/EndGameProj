#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "UObject/NoExportTypes.h"
#include "EArmPhase.h"
#include "EndBattleAIEB0002ArmController.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEB0002ArmController : public AEndBattleAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmHeightIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmHeightAroundIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmHeightSideAttack1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmHeightSideAttack2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmHeightTargetAroundIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmRotateSpeedIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmDistanceIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmDistanceAroundIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmDistanceSideAttack1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmDistanceSideAttack2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmDistanceTargetAroundIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmHeightCatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmDistanceCatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ArmThrowLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmThrowHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmThrowAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmThrowRollAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmThrowRollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ArmPointLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmPointAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmPointHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmPointDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmRotateSpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoArmPhase;
    
public:
    AEndBattleAIEB0002ArmController();
protected:
    UFUNCTION(BlueprintCallable)
    void SetArmPhase(EArmPhase InPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnRocketPunchStart();
    
    UFUNCTION(BlueprintCallable)
    void OnRocketPunchFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRightArmRocketPunchCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRightArmEjectCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRightArmDockingCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeftArmRocketPunchCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeftArmEjectCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeftArmDockingCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnEjectStart(float MoveSpeed, float LifeTime, float targetRadius);
    
    UFUNCTION(BlueprintCallable)
    void OnEjectFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnDockingStartLinear(float arrivalTime);
    
    UFUNCTION(BlueprintCallable)
    void OnDockingStart(float MoveSpeed, float LifeTime, float targetRadius);
    
    UFUNCTION(BlueprintCallable)
    void OnDockingFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDetachArm(bool enableAI);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeftArm();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EArmPhase GetArmPhase();
    
};

