#pragma once
#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "AccelModifier.generated.h"

USTRUCT(BlueprintType)
struct FAccelModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinVelocity;
    
    UPROPERTY(EditAnywhere)
    float MaxVelocity;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEasingFunc::Type> AccelEasingFunc;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEasingFunc::Type> DecelEasingFunc;
    
    UPROPERTY(EditAnywhere)
    float ModifyDuration;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEasingFunc::Type> JumpEasingFunc;
    
    UPROPERTY(EditAnywhere)
    float ModifyJumpDuration;
    
    UPROPERTY(EditAnywhere)
    float CutSceneMinVelocity;
    
    UPROPERTY(EditAnywhere)
    float CutSceneMaxVelocity;
    
    UPROPERTY(EditAnywhere)
    float NpcMinVelocity;
    
    UPROPERTY(EditAnywhere)
    float NpcMaxVelocity;
    
private:
    UPROPERTY(EditAnywhere)
    float AccelBlendExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AccelSteps;
    
    UPROPERTY(EditAnywhere)
    float DecelBlendExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecelSteps;
    
    UPROPERTY(EditAnywhere)
    float ElapsedModifyTime;
    
    UPROPERTY(EditAnywhere)
    float CurrentModifyAccelVelocity;
    
    UPROPERTY(EditAnywhere)
    float RemainDuration;
    
    UPROPERTY(EditAnywhere)
    float CachedVelocity;
    
    UPROPERTY(EditAnywhere)
    float CachedElapsedModifyTime;
    
    UPROPERTY(EditAnywhere)
    float JumpBlendExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JumpSteps;
    
    UPROPERTY(EditAnywhere)
    float ElapsedModifyJumpTime;
    
    UPROPERTY(EditAnywhere)
    float CachedBeforeJumpVelocity;
    
    UPROPERTY(EditAnywhere)
    float CachedBeforeCutSceneVelocity;
    
public:
    ENDGAME_API FAccelModifier();
};

