#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EndBalancingSolveBone.h"
#include "EndBalancingSolver.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEndBalancingSolver : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AngleInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndBalancingSolveBone> Bones;
    
    UEndBalancingSolver();
};

