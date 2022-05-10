#pragma once
#include "CoreMinimal.h"
#include "EndAISensor.h"
#include "EndAISensorVision.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAISensorVision : public FEndAISensor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float VisibleAngleAtIdle;
    
    UPROPERTY(EditAnywhere)
    float VisibleDistanceAtIdle;
    
    UPROPERTY(EditAnywhere)
    float VisibleAngleAtMoving;
    
    UPROPERTY(EditAnywhere)
    float VisibleDistanceAtMoving;
    
    FEndAISensorVision();
};

