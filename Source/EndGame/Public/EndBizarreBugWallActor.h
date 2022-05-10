#pragma once
#include "CoreMinimal.h"
#include "EndActorBaseInterface.h"
#include "EndFeelerActorInterface.h"
#include "GameFramework/Actor.h"
#include "EndBizarreBugWallInstanceContext.h"
#include "EEndBizarreBugWallMoveType.h"
#include "UObject/NoExportTypes.h"
#include "EndBizarreBugWallActor.generated.h"

class UInstancedStaticMeshComponent;
class USplineComponent;

UCLASS(Blueprintable)
class AEndBizarreBugWallActor : public AActor, public IEndFeelerActorInterface, public IEndActorBaseInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndBizarreBugWallInstanceContext> InstanceContexts;
    
    UPROPERTY(EditAnywhere)
    float SpawnCycle;
    
    UPROPERTY(EditAnywhere)
    float SplineMoveSpeed;
    
    UPROPERTY(EditAnywhere)
    float OverrideFadeInTime;
    
    UPROPERTY(EditAnywhere)
    float OverrideFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndBizarreBugWallMoveType MoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeginAnimationFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndAnimationFrame;
    
    UPROPERTY(EditAnywhere)
    float AnimationFrameRate;
    
    UPROPERTY(EditAnywhere)
    float AnimationPlayRate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* InstancedMeshComponent;
    
public:
    AEndBizarreBugWallActor();
    UFUNCTION(BlueprintCallable)
    void Stop(float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void Play(float BlendTime);
    
    
    // Fix for true pure virtual functions not being implemented
};

