#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndPlat4CraneRailActor.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API AEndPlat4CraneRailActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueIndex;
    
    UPROPERTY(EditAnywhere)
    float ForwardLength;
    
    UPROPERTY(EditAnywhere)
    float BackwardLength;
    
    UPROPERTY(EditAnywhere)
    float PlaySeconds;
    
    UPROPERTY(EditAnywhere)
    float CurrentPositionInSeconds;
    
public:
    AEndPlat4CraneRailActor();
};

