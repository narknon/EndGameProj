#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAISU0002Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAISU0002Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShivaMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShivaMoveRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShivaMoveAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShivaMoveDirectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

