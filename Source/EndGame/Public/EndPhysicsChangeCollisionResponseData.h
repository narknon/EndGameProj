#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EndPhysicsChangeCollisionResponseData.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndPhysicsChangeCollisionResponseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionResponse> CollisionResponse;
    
    FEndPhysicsChangeCollisionResponseData();
};

