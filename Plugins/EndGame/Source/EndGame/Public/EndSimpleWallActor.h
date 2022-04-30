#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndSimpleWallActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AEndSimpleWallActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    AEndSimpleWallActor();
};

