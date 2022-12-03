#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndActorInterface.h"
#include "EndActorBaseInterface.h"
#include "EndSwitchHiddenActor.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API AEndSwitchHiddenActor : public AActor, public IEndActorInterface, public IEndActorBaseInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TargetActors;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUnregisterTickOnHideEnvSetWrapper: 1;
    
    AEndSwitchHiddenActor();
    
    // Fix for true pure virtual functions not being implemented
};

