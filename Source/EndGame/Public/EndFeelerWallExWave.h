#pragma once
#include "CoreMinimal.h"
#include "EndFeelerWallExInstanceContext.h"
#include "EndFeelerWallExWave.generated.h"

class UInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct FEndFeelerWallExWave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndFeelerWallExInstanceContext> InstanceContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInstancedStaticMeshComponent*> InstancedMeshComponents;
    
    ENDGAME_API FEndFeelerWallExWave();
};

