#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndCharacterMovementActor.generated.h"

class UEndDuringCharacterMovementComponent;

UCLASS(Blueprintable)
class ENDGAME_API AEndCharacterMovementActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Export)
    UEndDuringCharacterMovementComponent* DuringCharacterMovementComponentList[12];
    
public:
    AEndCharacterMovementActor();
};

