#pragma once
#include "CoreMinimal.h"
#include "EndPhysicalConstraintEvaluator.h"
#include "EndPhysicalConstraintWireEvaluator.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndPhysicalConstraintWireEvaluator : public FEndPhysicalConstraintEvaluator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ReleaseWireSpeed;
    
    UPROPERTY(EditAnywhere)
    float ReleaseVelocityStiffness;
    
    FEndPhysicalConstraintWireEvaluator();
};

