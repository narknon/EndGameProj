#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EGuestAerithState.h"
#include "EndBattleAISlu5bAerithController.generated.h"

class AEndCharacter;

UCLASS(Blueprintable)
class AEndBattleAISlu5bAerithController : public AEndBattleAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float EncourageRecastTime;
    
    UPROPERTY(EditAnywhere)
    float CheeringRecastTime;
    
    UPROPERTY(EditAnywhere)
    float WorryRecastTime;
    
    UPROPERTY(EditAnywhere)
    float MinimumHideTime;
    
    UPROPERTY(EditAnywhere)
    float ATBIncreasment;
    
public:
    AEndBattleAISlu5bAerithController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateGuestAerith(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void LookAtOn(AEndCharacter* LookTarget);
    
    UFUNCTION(BlueprintCallable)
    void LookAtOff();
    
    UFUNCTION(BlueprintCallable)
    EGuestAerithState GetCurrnetState();
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugCurrnetState();
    
    UFUNCTION(BlueprintCallable)
    void CheckSelf(float SafeDistance);
    
    UFUNCTION(BlueprintCallable)
    void CheckGarden();
    
    UFUNCTION(BlueprintCallable)
    void CheckEncouragment(float Probability, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void CheckBattleField();
    
    UFUNCTION(BlueprintCallable)
    void ChangeAerithState(EGuestAerithState NewState);
    
};

