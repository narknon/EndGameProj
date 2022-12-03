#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EndBattleAIEB0000Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAIEB0000Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpTurnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpTurnBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpTurnAngle;
    
public:
    AEndBattleAIEB0000Controller();
protected:
    UFUNCTION(BlueprintCallable)
    void SetForceJumpEnd();
    
    UFUNCTION(BlueprintCallable)
    void RequestWallJump(int32 InID, float InTime, float InBias);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseWallJump(int32 InID, float InTime, float InBias);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTurnJumpEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTurnJumpBegin();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTurnJump();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnWall();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnFloor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGSFly();
    
};

