#pragma once
#include "CoreMinimal.h"
#include "EndAISensor.h"
#include "EndAISensorVision.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAISensorVision : public FEndAISensor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibleAngleAtIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibleDistanceAtIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibleAngleAtMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibleDistanceAtMoving;
    
    FEndAISensorVision();
};

