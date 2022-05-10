#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "EndBikeTriggerBoxResetPhysActor.generated.h"

class AEndCharacter;
class AEndBikeTriggerBoxSavePhysActor;
class AActor;

UCLASS(Abstract, Blueprintable)
class AEndBikeTriggerBoxResetPhysActor : public ATriggerBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndCharacter* mTriggerTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndBikeTriggerBoxSavePhysActor* SaveTrigger;
    
public:
    AEndBikeTriggerBoxResetPhysActor();
    UFUNCTION(BlueprintCallable)
    void BeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

