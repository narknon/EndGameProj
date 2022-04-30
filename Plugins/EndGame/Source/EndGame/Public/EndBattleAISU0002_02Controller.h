#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAISU0002_02Controller.generated.h"

class UEndBattleDamageSourceComponent;

UCLASS(Blueprintable)
class AEndBattleAISU0002_02Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float BarrierSpeed;
    
    UPROPERTY(EditAnywhere)
    float BarrierRange;
    
    UPROPERTY(EditAnywhere)
    float BarrierForceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpinOffset;
    
    UPROPERTY(EditAnywhere)
    float SpinRadius;
    
    UPROPERTY(EditAnywhere)
    float SpinSpeed;
    
    UPROPERTY(EditAnywhere)
    float SpinAxisSpeed;
    
public:
    AEndBattleAISU0002_02Controller();
protected:
    UFUNCTION(BlueprintCallable)
    void SetTargetDamageSource(UEndBattleDamageSourceComponent* InDamageSource);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuspend();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIfritRoar();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitDamage();
    
};

