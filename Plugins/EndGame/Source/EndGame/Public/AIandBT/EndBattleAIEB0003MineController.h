#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAIEB0003MineController.generated.h"

class AEndCharacter;

UCLASS(Blueprintable)
class AEndBattleAIEB0003MineController : public AEndBattleAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MineMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float MineSnapSpeed;
    
    UPROPERTY(EditAnywhere)
    float MineSnapEndQuantity;
    
    UPROPERTY(EditAnywhere)
    float RenoDistance;
    
    UPROPERTY(EditAnywhere)
    float UcpcDistance;
    
    UPROPERTY(EditAnywhere)
    float RepulsiveDistance;
    
    UPROPERTY(EditAnywhere)
    float RepulsiveAccQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IgnoreRepulsiveActgions;
    
    UPROPERTY(EditAnywhere)
    float MineMoveInterval;
    
    UPROPERTY(EditAnywhere)
    float RepulsiveOriginInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IgnoreStopFollowAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IgnoreStopReturnAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRollingAtack;
    
    UPROPERTY(EditAnywhere)
    float RollingAtackStartDistance;
    
    UPROPERTY(EditAnywhere)
    float RollingAtackPhase1Time;
    
    UPROPERTY(EditAnywhere)
    float RollingAtackPhase1Height;
    
    UPROPERTY(EditAnywhere)
    float RollingAtackSpeed;
    
    UPROPERTY(EditAnywhere)
    float RollingAtackRadius;
    
    UPROPERTY(EditAnywhere)
    float RollingAtackFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ReturnLocation;
    
    UPROPERTY(EditAnywhere)
    float ReturnSpeed;
    
    UPROPERTY(EditAnywhere)
    float TurnSpeed;
    
public:
    AEndBattleAIEB0003MineController();
    UFUNCTION(BlueprintCallable)
    void SetOverrideFollowTarget(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable)
    void SetFollow(bool InFollow, FVector InLocation);
    
    UFUNCTION(BlueprintCallable)
    void ReadySpark(int32 sparkID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadySpark(int32 sparkID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCheckFollow(bool OutBattleArea, bool NotOwnerTrace, bool NotUcpcTrace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRolling();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInConfirmSpark();
    
};

