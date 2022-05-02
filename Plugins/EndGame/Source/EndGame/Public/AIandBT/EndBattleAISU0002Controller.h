#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAISU0002Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAISU0002Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ShivaMoveSpeed;
    
    UPROPERTY(EditAnywhere)
    float ShivaMoveRange;
    
    UPROPERTY(EditAnywhere)
    float ShivaMoveAngle;
    
    UPROPERTY(EditAnywhere)
    float ShivaMoveDirectionTime;
    
    UPROPERTY(EditAnywhere)
    float IfritRoarTime;
    
    AEndBattleAISU0002Controller();
protected:
    UFUNCTION(BlueprintCallable)
    void StartIfritRoar();
    
    UFUNCTION(BlueprintCallable)
    void SetNextShivaMoveLocation(FVector InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetNextShivaMove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestShivaMove(int32 InMoveCount, bool InContactWall);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIfritRoar(FName IDamageSourceID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndShivaMoveStart();
    
    UFUNCTION(BlueprintCallable)
    void DisableEndShivaMove();
    
};

