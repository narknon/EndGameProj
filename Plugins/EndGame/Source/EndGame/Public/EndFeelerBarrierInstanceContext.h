#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EndFeelerBarrierTimeRateAndSize.h"
#include "UObject/NoExportTypes.h"
#include "EndFeelerBarrierInstanceContext.generated.h"

USTRUCT(BlueprintType)
struct FEndFeelerBarrierInstanceContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndFeelerBarrierTimeRateAndSize Horizontal;
    
    UPROPERTY(EditAnywhere)
    float VerticalHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndFeelerBarrierTimeRateAndSize PrimaryVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndFeelerBarrierTimeRateAndSize SecondaryVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndFeelerBarrierTimeRateAndSize PrimaryRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndFeelerBarrierTimeRateAndSize SecondaryRoll;
    
    UPROPERTY(EditAnywhere)
    float TargetExtrusionDistance;
    
    UPROPERTY(EditAnywhere)
    float CurrentExtrusionDistance;
    
    UPROPERTY(EditAnywhere)
    float ExtrusionWaitTimer;
    
    UPROPERTY(EditAnywhere)
    float DeactiveUpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CurrentTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentVelocity;
    
    ENDGAME_API FEndFeelerBarrierInstanceContext();
};

