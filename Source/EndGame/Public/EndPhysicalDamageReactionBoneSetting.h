#pragma once
#include "CoreMinimal.h"
#include "EndPhysicalDamageReactionBoneSetting.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndPhysicalDamageReactionBoneSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContinuationImpulseVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalDownImpulseVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalDownContinuationImpulseVelocity;
    
    FEndPhysicalDamageReactionBoneSetting();
};

