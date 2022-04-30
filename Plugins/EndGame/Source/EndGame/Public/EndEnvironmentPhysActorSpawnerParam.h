#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EndEnvironmentPhysActorSpawnerParam.generated.h"

USTRUCT(BlueprintType)
struct FEndEnvironmentPhysActorSpawnerParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UsedEnvironmentPhysicsSpecName;
    
    ENDGAME_API FEndEnvironmentPhysActorSpawnerParam();
};

