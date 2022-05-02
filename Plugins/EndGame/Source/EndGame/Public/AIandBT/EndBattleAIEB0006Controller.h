#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAIEB0006Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEB0006Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float JumpTurnTime;
    
    UPROPERTY(EditAnywhere)
    float JumpTurnBias;
    
    UPROPERTY(EditAnywhere)
    float DivePrepareRotateYaw;
    
    UPROPERTY(EditAnywhere)
    float DivePrepareRotatePitch;
    
    UPROPERTY(EditAnywhere)
    float DiveLoopRotateYaw;
    
    UPROPERTY(EditAnywhere)
    float DiveLoopRotatePitch;
    
    UPROPERTY(EditAnywhere)
    float DiveBeginSpeed;
    
    UPROPERTY(EditAnywhere)
    float DiveAddSpeed;
    
    UPROPERTY(EditAnywhere)
    float DiveOffsetZ;
    
public:
    AEndBattleAIEB0006Controller();
protected:
    UFUNCTION(BlueprintCallable)
    void SetForceJumpEnd();
    
    UFUNCTION(BlueprintCallable)
    void RequestWallJump(int32 InID, float InTime, float InBias);
    
    UFUNCTION(BlueprintCallable)
    void RequestTurnJump(FVector Target);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseWallJump(int32 InID, float InTime, float InBias);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnWall();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnFloor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHHFly();
    
};

