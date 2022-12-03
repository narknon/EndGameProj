#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndCategoryVolumeControlActor.generated.h"

class UEndCategoryVolumeControlComponent;

UCLASS(Blueprintable)
class ENDGAME_API AEndCategoryVolumeControlActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndCategoryVolumeControlComponent* ControllerComponent;
    
public:
    AEndCategoryVolumeControlActor();
    UFUNCTION(BlueprintCallable)
    void UpdateCategoryVolumeComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEndCategoryVolumeControlComponent* GetControllerComponent() const;
    
};

