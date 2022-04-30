#pragma once
#include "CoreMinimal.h"
#include "EndBikeAIHelicopterLockOnInfo.generated.h"

USTRUCT(BlueprintType)
struct FEndBikeAIHelicopterLockOnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageSourceID;
    
    UPROPERTY(EditAnywhere)
    float DelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Tracking;
    
    ENDGAME_API FEndBikeAIHelicopterLockOnInfo();
};

