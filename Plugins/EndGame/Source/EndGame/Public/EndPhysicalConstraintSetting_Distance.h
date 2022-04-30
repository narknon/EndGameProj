#pragma once
#include "CoreMinimal.h"
#include "EndPhysicalConstraintSetting_Distance.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndPhysicalConstraintSetting_Distance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName1;
    
    UPROPERTY(EditAnywhere)
    float BoneInvMassBias0;
    
    UPROPERTY(EditAnywhere)
    float BoneInvMassBias1;
    
    UPROPERTY(EditAnywhere)
    float CompressionStiffness;
    
    UPROPERTY(EditAnywhere)
    float StretchStiffness;
    
    UPROPERTY(EditAnywhere)
    float OverrideDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCalculate2D;
    
    FEndPhysicalConstraintSetting_Distance();
};

