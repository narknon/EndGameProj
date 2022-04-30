#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndPathWaySplineActor.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class ENDGAME_API AEndPathWaySplineActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float PathWayBaseWidth;
    
    UPROPERTY(EditAnywhere)
    float PathWayOffsetWidth;
    
    UPROPERTY(EditAnywhere)
    float PathWaySpace;
    
    UPROPERTY(EditAnywhere)
    float ArrowLength;
    
    UPROPERTY(EditAnywhere)
    float ArrowSize;
    
    UPROPERTY(EditAnywhere)
    float ArrowThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* PathWayComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PathWayActorsName;
    
public:
    AEndPathWaySplineActor();
};

