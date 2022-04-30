#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EndFeelerBarrierBaseAndRandomBias.generated.h"

USTRUCT(BlueprintType)
struct FEndFeelerBarrierBaseAndRandomBias {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RandomBiasRange;
    
    ENDGAME_API FEndFeelerBarrierBaseAndRandomBias();
};

