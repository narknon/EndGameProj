#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndEnvironmentPhysActorSpawnerParam.h"
#include "EEndEnvironmentPhysForceScale.h"
#include "UObject/NoExportTypes.h"
#include "EndEnvironmentPhysActorSpawner.generated.h"

UCLASS(Blueprintable)
class AEndEnvironmentPhysActorSpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnWithImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndEnvironmentPhysActorSpawnerParam> SpawnParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndEnvironmentPhysForceScale ImpulseScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ImpulseOrigin;
    
    UPROPERTY(EditAnywhere)
    float ImpulseRadius;
    
    AEndEnvironmentPhysActorSpawner();
};

