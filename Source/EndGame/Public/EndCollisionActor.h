#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndActorInterface.h"
#include "EndActorBaseInterface.h"
#include "EndCollisionActor.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API AEndCollisionActor : public AActor, public IEndActorInterface, public IEndActorBaseInterface {
    GENERATED_BODY()
public:
    AEndCollisionActor();
    
    // Fix for true pure virtual functions not being implemented
};

