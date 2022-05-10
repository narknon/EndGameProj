#pragma once
#include "CoreMinimal.h"
#include "ESummonAbilityInfluenceCenter.h"
#include "SummonAbilityChoice.generated.h"

USTRUCT(BlueprintType)
struct FSummonAbilityChoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(EditAnywhere)
    uint8 Priority;
    
    UPROPERTY(EditAnywhere)
    float MinDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(EditAnywhere)
    float MinHeight;
    
    UPROPERTY(EditAnywhere)
    float MaxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESummonAbilityInfluenceCenter InfluenceCenter;
    
    UPROPERTY(EditAnywhere)
    float InfluenceRadius;
    
    UPROPERTY(EditAnywhere)
    uint8 InfluenceTargets;
    
    UPROPERTY(EditAnywhere)
    float SelfToGroundDist;
    
    UPROPERTY(EditAnywhere)
    float TargetToGroundDist;
    
    UPROPERTY(EditAnywhere)
    float Probability;
    
    ENDGAME_API FSummonAbilityChoice();
};

