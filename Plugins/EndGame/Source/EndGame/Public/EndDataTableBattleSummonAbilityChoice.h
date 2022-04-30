#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleSummonAbilityChoice.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleSummonAbilityChoice : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 OwnerSummon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityID;
    
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
    
    UPROPERTY(EditAnywhere)
    uint8 InfluenceCenter;
    
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
    
    FEndDataTableBattleSummonAbilityChoice();
};

