#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndEmissiveControlActor.generated.h"

class UEndEmissiveControlComponent;

UCLASS(Blueprintable)
class ENDGAME_API AEndEmissiveControlActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndEmissiveControlComponent* ControllerComponent;
    
public:
    AEndEmissiveControlActor();
    UFUNCTION(BlueprintCallable)
    void UpdateControllerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEndEmissiveControlComponent* GetControllerComponent() const;
    
};

