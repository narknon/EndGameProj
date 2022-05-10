#pragma once
#include "CoreMinimal.h"
#include "RageDush.generated.h"

USTRUCT(BlueprintType)
struct FRageDush {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(EditAnywhere)
    float TurnSpeed;
    
    UPROPERTY(EditAnywhere)
    float HitTargetRadius;
    
    UPROPERTY(EditAnywhere)
    float HitStopRadius;
    
    UPROPERTY(EditAnywhere)
    float HitStopTime;
    
    ENDGAME_API FRageDush();
};

