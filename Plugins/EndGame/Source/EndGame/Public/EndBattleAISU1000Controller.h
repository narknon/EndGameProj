#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EndBattleAISU1000Controller.generated.h"

UCLASS(Blueprintable)
class AEndBattleAISU1000Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
    AEndBattleAISU1000Controller();
protected:
    UFUNCTION(BlueprintCallable)
    void SetPowerUpSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetHidePowerUpFX(bool bHide, bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void PowerLose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPowerUpMax() const;
    
    UFUNCTION(BlueprintPure)
    float GetPowerUpSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetPowerUpMagnitude() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearPowerUp();
    
    UFUNCTION(BlueprintCallable)
    void AddPowerUpMagnitude(float Magnitude);
    
};

