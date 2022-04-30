#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BikeAIHelicopterSpecialAttackParameter.generated.h"

USTRUCT(BlueprintType)
struct FBikeAIHelicopterSpecialAttackParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MoveOnNotAttackBarretTargetForPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveOffsetOnNotAttackBarretEv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpecialAttackCameraLinear;
    
    UPROPERTY(EditAnywhere)
    float SpecialAttackCameraTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpecialAttackCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpecialAttackCameraEyeOffset;
    
    UPROPERTY(EditAnywhere)
    float SpecialAttackCameraFOV;
    
    UPROPERTY(EditAnywhere)
    float SpecialAttackDelay;
    
    ENDGAME_API FBikeAIHelicopterSpecialAttackParameter();
};

