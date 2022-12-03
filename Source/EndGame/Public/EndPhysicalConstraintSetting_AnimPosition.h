#pragma once
#include "CoreMinimal.h"
#include "EndPhysicalConstraintSetting_AnimPosition.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndPhysicalConstraintSetting_AnimPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoneInvMassBias0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoneInvMassBias1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stiffness;
    
    FEndPhysicalConstraintSetting_AnimPosition();
};

