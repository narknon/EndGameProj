#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAISU0004_02Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAISU0004_02Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float TornadoMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float UcpcDistance;
    
    UPROPERTY(EditAnywhere)
    float RepulsiveDistance;
    
    UPROPERTY(EditAnywhere)
    float RepulsiveAccQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IgnoreRepulsiveActgions;
    
    UPROPERTY(EditAnywhere)
    float TornadoMoveInterval;
    
    UPROPERTY(EditAnywhere)
    float RepulsiveOriginInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IgnoreStopFollowAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanFollow;
    
    UPROPERTY(EditAnywhere)
    float MoveEndQuantity;
    
public:
    AEndBattleAISU0004_02Controller();
    UFUNCTION(BlueprintCallable)
    void RequestFollowLocationFromName(const FName& InName, float InTolerance);
    
    UFUNCTION(BlueprintCallable)
    void RequestFollowLocation(FVector InLocation, float InTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArrivalFollowLocation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFollowLocation();
    
};

