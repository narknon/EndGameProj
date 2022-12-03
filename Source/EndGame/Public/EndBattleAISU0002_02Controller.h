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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrierSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrierRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrierForceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpinOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

