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
    
    UPROPERTY(EditAnywhere)
    float InitialVelocity;
    
    UPROPERTY(EditAnywhere)
    float NegativeAcceleration;
    
    ENDGAME_API FEndRamuhCoreKnockbackParam();
};

