#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndActorInterface.h"
#include "EndActorBaseInterface.h"
#include "EndSwitchHiddenPrimitiveActor.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API AEndSwitchHiddenPrimitiveActor : public AActor, public IEndActorInterface, public IEndActorBaseInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TargetActors;
    
    AEndSwitchHiddenPrimitiveActor();
    
    // Fix for true pure virtual functions not being implemented
};

