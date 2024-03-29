#pragma once
#include "CoreMinimal.h"
#include "EndAISensor.h"
#include "EndAISensorTactileSense.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAISensorTactileSense : public FEndAISensor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeatDistance;
    
    FEndAISensorTactileSense();
};

