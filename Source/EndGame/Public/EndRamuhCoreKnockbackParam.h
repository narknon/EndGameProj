#pragma once
#include "CoreMinimal.h"
#include "EEndBattleDamageSourceHitReactionType.h"
#include "EndRamuhCoreKnockbackParam.generated.h"

USTRUCT(BlueprintType)
struct FEndRamuhCoreKnockbackParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndBattleDamageSourceHitReactionType HitReactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NegativeAcceleration;
    
    ENDGAME_API FEndRamuhCoreKnockbackParam();
};

