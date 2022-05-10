#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EndJointEulerRotationLimit.generated.h"

USTRUCT(BlueprintType)
struct FEndJointEulerRotationLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Max;
    
    ENDGAME_API FEndJointEulerRotationLimit();
};

