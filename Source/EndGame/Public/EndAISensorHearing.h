#pragma once
#include "CoreMinimal.h"
#include "EndAISensor.h"
#include "EndAISensorHearing.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAISensorHearing : public FEndAISensor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HearDistance;
    
    FEndAISensorHearing();
};

