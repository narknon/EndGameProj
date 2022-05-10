#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EndHandEffectorSolveHand.h"
#include "EndHandEffectorSolver.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEndHandEffectorSolver : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> HandMaxIterations;
    
    UPROPERTY(EditAnywhere)
    float HandReachPrecision;
    
    UPROPERTY(EditAnywhere)
    float TargetReachStepPercent;
    
    UPROPERTY(EditAnywhere)
    float PullDistribution;
    
    UPROPERTY(EditAnywhere)
    float AlwaysLockRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndHandEffectorSolveHand> Hands;
    
    UEndHandEffectorSolver();
};

