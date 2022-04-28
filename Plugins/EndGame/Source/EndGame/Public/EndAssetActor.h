#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndAssetActor.generated.h"

class UObject;

UCLASS()
class ENDGAME_API AEndAssetActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UObject*> AssetUserData;
    
    AEndAssetActor();
};

