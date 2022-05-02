#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EndAIOverlapEventDelegate.h"
#include "EndBattleAIOverlapComponent.generated.h"

class AEndNavModifierVolume;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndBattleAIOverlapComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAIOverlapEvent OnArrivalListener;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAIOverlapEvent OnDepartureListener;
    
    UEndBattleAIOverlapComponent();
    UFUNCTION(BlueprintCallable)
    void SubVolume(AEndNavModifierVolume* InVolume);
    
    UFUNCTION(BlueprintCallable)
    void ResetVolume();
    
    UFUNCTION(BlueprintCallable)
    void AddVolume(AEndNavModifierVolume* InVolume);
    
};

