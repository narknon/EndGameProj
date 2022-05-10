#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EndPhysicsChangeCollisionResponseData.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndPhysicsChangeCollisionResponseData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionResponse> CollisionResponse;
    
    FEndPhysicsChangeCollisionResponseData();
};

