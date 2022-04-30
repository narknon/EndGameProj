#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "Engine/EngineTypes.h"
#include "EndTriggerBox.generated.h"

class UEndTextRenderComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class ENDGAME_API AEndTriggerBox : public ATriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndTextRenderComponent* TextRenderComponent;
    
    AEndTriggerBox();
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

