#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EndAITimerOnRunningTimerDelegate.h"
#include "EndAITimerOnFinishTimerDelegate.h"
#include "EndAITimerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndAITimerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAITimerOnRunningTimer OnRunningDispacher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAITimerOnFinishTimer OnFinishDispacher;
    
    UEndAITimerComponent();
    UFUNCTION(BlueprintCallable)
    void Suspend(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void START(float InTime, FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NotRunningFromName(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NotRunning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningFromName(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning();
    
    UFUNCTION(BlueprintCallable)
    void AddTimer(float InTime, FName InName);
    
};

