#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EndPhysicalConstraintSetting_AnimPositionVelocity.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndPhysicalConstraintSetting_AnimPositionVelocity {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DistanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D VelocityRange;
    
    FEndPhysicalConstraintSetting_AnimPositionVelocity();
};

