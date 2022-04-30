#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EEndEnvironmentPhysForceScale.h"
#include "EndEnvironmentPhysAddForceActor.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API AEndEnvironmentPhysAddForceActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndEnvironmentPhysForceScale AddForceScale;
    
    UPROPERTY(EditAnywhere)
    float AppliedRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitAngle;
    
    UPROPERTY(EditAnywhere)
    float AppliedAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImmediate;
    
    UPROPERTY(EditAnywhere)
    float AppliedSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreZ;
    
    AEndEnvironmentPhysAddForceActor();
};

