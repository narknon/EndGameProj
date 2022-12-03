#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "EndActorInterface.h"
#include "EndActorBaseInterface.h"
#include "EndStaticMeshActor.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API AEndStaticMeshActor : public AStaticMeshActor, public IEndActorInterface, public IEndActorBaseInterface {
    GENERATED_BODY()
public:
    AEndStaticMeshActor();
    
    // Fix for true pure virtual functions not being implemented
};

