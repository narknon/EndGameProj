#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndBikeSpline.generated.h"

class UEndBikeSplineComponent;

UCLASS(Blueprintable)
class AEndBikeSpline : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndBikeSplineComponent* mSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoop;
    
public:
    AEndBikeSpline();
};

