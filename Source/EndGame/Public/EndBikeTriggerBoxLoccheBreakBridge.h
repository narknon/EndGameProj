#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "EndBikeTriggerBoxLoccheBreakBridge.generated.h"

class AEndCharacter;
class AActor;

UCLASS(Blueprintable)
class AEndBikeTriggerBoxLoccheBreakBridge : public ATriggerBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndCharacter* mTarget;
    
public:
    AEndBikeTriggerBoxLoccheBreakBridge();
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
};

