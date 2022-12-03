#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BikeAIControllerTrikeSpecialAttackParameter.generated.h"

USTRUCT(BlueprintType)
struct FBikeAIControllerTrikeSpecialAttackParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecialAttackCameraTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpecialAttackCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpecialAttackCameraEyeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecialAttackCameraFOV;
    
    ENDGAME_API FBikeAIControllerTrikeSpecialAttackParameter();
};

