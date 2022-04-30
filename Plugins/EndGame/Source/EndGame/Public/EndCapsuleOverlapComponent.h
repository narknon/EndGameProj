#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EndCapsuleOverlapComponent.generated.h"

class UCapsuleComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndCapsuleOverlapComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UEndCapsuleOverlapComponent();
};

