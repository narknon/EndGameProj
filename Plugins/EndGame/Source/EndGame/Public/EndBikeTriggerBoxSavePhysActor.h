#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "EndBikeTriggerBoxSavePhysActor.generated.h"

class AEndCharacter;
class AActor;

UCLASS(Abstract, Blueprintable)
class AEndBikeTriggerBoxSavePhysActor : public ATriggerBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndCharacter* mTriggerTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TargetLevels;
    
public:
    AEndBikeTriggerBoxSavePhysActor();
    UFUNCTION(BlueprintCallable)
    void BeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

