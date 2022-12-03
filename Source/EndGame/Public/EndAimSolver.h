#pragma once
#include "CoreMinimal.h"
#include "EndAimSolveEffector.h"
#include "UObject/Object.h"
#include "EndAimSolver.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEndAimSolver : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEndAimSolveEffector> Effectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClampHorizontalDistanceMin;
    
    UEndAimSolver();
};

