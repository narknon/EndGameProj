#pragma once
#include "CoreMinimal.h"
#include "EndPhysicalDamageReactionBoneSetting.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndPhysicalDamageReactionBoneSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    float ImpulseVelocity;
    
    UPROPERTY(EditAnywhere)
    float ContinuationImpulseVelocity;
    
    UPROPERTY(EditAnywhere)
    float AdditionalDownImpulseVelocity;
    
    UPROPERTY(EditAnywhere)
    float AdditionalDownContinuationImpulseVelocity;
    
    FEndPhysicalDamageReactionBoneSetting();
};

