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
    UPROPERTY(EditAnywhere)
    float ArmHeightIdle;
    
    UPROPERTY(EditAnywhere)
    float ArmHeightAroundIdle;
    
    UPROPERTY(EditAnywhere)
    float ArmHeightSideAttack1;
    
    UPROPERTY(EditAnywhere)
    float ArmHeightSideAttack2;
    
    UPROPERTY(EditAnywhere)
    float ArmHeightTargetAroundIdle;
    
    UPROPERTY(EditAnywhere)
    float ArmRotateSpeedIdle;
    
    UPROPERTY(EditAnywhere)
    float ArmDistanceIdle;
    
    UPROPERTY(EditAnywhere)
    float ArmDistanceAroundIdle;
    
    UPROPERTY(EditAnywhere)
    float ArmDistanceSideAttack1;
    
    UPROPERTY(EditAnywhere)
    float ArmDistanceSideAttack2;
    
    UPROPERTY(EditAnywhere)
    float ArmDistanceTargetAroundIdle;
    
    UPROPERTY(EditAnywhere)
    float ArmHeightCatch;
    
    UPROPERTY(EditAnywhere)
    float ArmDistanceCatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ArmThrowLocation;
    
    UPROPERTY(EditAnywhere)
    float ArmThrowHeight;
    
    UPROPERTY(EditAnywhere)
    float ArmThrowAngle;
    
    UPROPERTY(EditAnywhere)
    float ArmThrowRollAngle;
    
    UPROPERTY(EditAnywhere)
    float ArmThrowRollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ArmPointLocation;
    
    UPROPERTY(EditAnywhere)
    float ArmPointAngle;
    
    UPROPERTY(EditAnywhere)
    float ArmPointHeight;
    
    UPROPERTY(EditAnywhere)
    float ArmPointDistance;
    
    UPROPERTY(EditAnywhere)
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

