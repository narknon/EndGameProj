#pragma once
#include "CoreMinimal.h"
#include "EndActorBaseInterface.h"
#include "GameFramework/Actor.h"
#include "EndActorInterface.h"
#include "UObject/NoExportTypes.h"
#include "EndEnvironmentInstancedStaticMeshActor.generated.h"

class UInstancedStaticMeshComponent;

UCLASS(Blueprintable)
class ENDGAME_API AEndEnvironmentInstancedStaticMeshActor : public AActor, public IEndActorInterface, public IEndActorBaseInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* InstancedMeshComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AnimateDirection;
    
    UPROPERTY(EditAnywhere, Transient)
    float AnimateTime;
    
    UPROPERTY(EditAnywhere)
    float AnimateTimeRate;
    
    UPROPERTY(EditAnywhere)
    float AnimateTimeMax;
    
    AEndEnvironmentInstancedStaticMeshActor();
    
    // Fix for true pure virtual functions not being implemented
};

