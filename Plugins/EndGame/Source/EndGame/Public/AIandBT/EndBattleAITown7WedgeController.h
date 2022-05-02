#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIPcBaseController.h"
#include "EndBattleAITown7WedgeController.generated.h"

class AEndCharacter;

UCLASS(Blueprintable)
class AEndBattleAITown7WedgeController : public AEndBattleAIPcBaseController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(EditAnywhere)
    float FleeMovementGoalRadius;
    
    UPROPERTY(EditAnywhere)
    float FleeLocationResetDuration;
    
    UPROPERTY(EditAnywhere)
    float FleeLocationResetDistance;
    
public:
    AEndBattleAITown7WedgeController();
    UFUNCTION(BlueprintCallable)
    void StopFlee();
    
    UFUNCTION(BlueprintCallable)
    void StopConfront();
    
    UFUNCTION(BlueprintCallable)
    void StartFlee(TArray<AEndCharacter*> Targets);
    
    UFUNCTION(BlueprintCallable)
    void StartConfront(float Distance);
    
    UFUNCTION(BlueprintCallable)
    bool IsFleeing();
    
    UFUNCTION(BlueprintCallable)
    bool IsConfronting();
    
    UFUNCTION(BlueprintCallable)
    void EndRootMovement();
    
    UFUNCTION(BlueprintCallable)
    void BeginRootMovement();
    
};

