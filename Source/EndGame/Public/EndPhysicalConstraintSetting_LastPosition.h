#pragma once
#include "CoreMinimal.h"
#include "EndPhysicalConstraintSetting_LastPosition.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndPhysicalConstraintSetting_LastPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName0;
    
    UPROPERTY(EditAnywhere)
    float BoneCorrectBias0;
    
    UPROPERTY(EditAnywhere)
    float OldPositionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAnimPosition;
    
    FEndPhysicalConstraintSetting_LastPosition();
};

