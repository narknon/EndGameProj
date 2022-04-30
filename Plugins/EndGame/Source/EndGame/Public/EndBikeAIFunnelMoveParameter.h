#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EndBikeAIFunnelMoveParameter.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FEndBikeAIFunnelMoveParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BaseOffset;
    
    UPROPERTY(EditAnywhere)
    float ApproachRate;
    
    UPROPERTY(EditAnywhere)
    float LimitZ;
    
    UPROPERTY(EditAnywhere)
    float LimitXY;
    
    UPROPERTY(EditAnywhere)
    float CurveInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* CurveAsset;
    
    ENDGAME_API FEndBikeAIFunnelMoveParameter();
};

