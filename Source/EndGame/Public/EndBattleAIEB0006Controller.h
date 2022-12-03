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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpTurnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpTurnBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivePrepareRotateYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivePrepareRotatePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiveLoopRotateYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiveLoopRotatePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiveBeginSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiveAddSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

