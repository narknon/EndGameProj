#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "EndActorInterface.h"
#include "EndActorBaseInterface.h"
#include "EndEnvironmentStaticMeshActor.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API AEndEnvironmentStaticMeshActor : public AStaticMeshActor, public IEndActorInterface, public IEndActorBaseInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSeeThroughSkillCamera;
    
    AEndEnvironmentStaticMeshActor();
    
    // Fix for true pure virtual functions not being implemented
};

