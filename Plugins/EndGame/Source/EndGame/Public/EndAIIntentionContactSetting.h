#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "EndAIIntentionContactSetting.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API UEndAIIntentionContactSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAtCoolDownTimeRange;
    
    UPROPERTY(EditAnywhere)
    float LookAtWeightIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAtDurationRangeIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAtActiveBlendTimeRangeIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAtDeactiveBlendTimeRangeIdle;
    
    UPROPERTY(EditAnywhere)
    float LookAtWeightWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAtDurationRangeWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAtActiveBlendTimeRangeWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAtDeactiveBlendTimeRangeWalk;
    
    UPROPERTY(EditAnywhere)
    float LookAtWeightRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAtDurationRangeRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAtActiveBlendTimeRangeRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAtDeactiveBlendTimeRangeRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AnimationCoolDownTimeRange;
    
    UPROPERTY(EditAnywhere)
    float AnimationContactOverrideLocomotionTime;
    
    UPROPERTY(EditAnywhere)
    float AnimationContactWalkTime;
    
    UPROPERTY(EditAnywhere)
    float AnimationContactWalkBlendTime;
    
    UPROPERTY(EditAnywhere)
    float AnimationContactRunBlendTime;
    
    UPROPERTY(EditAnywhere)
    float AnimationContactWalkUpperBodyBlendTime;
    
    UPROPERTY(EditAnywhere)
    float AnimationContactRunUpperBodyBlendTime;
    
    UPROPERTY(EditAnywhere)
    float AnimationContactWalkRotationRate;
    
    UPROPERTY(EditAnywhere)
    float AnimationContactRunRotationRate;
    
    UPROPERTY(EditAnywhere)
    float AnimationContactWalkNoInputSuspendTime;
    
    UPROPERTY(EditAnywhere)
    float AnimationContactRunNoInputSuspendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HipMoveCoolDownTimeRange;
    
    UPROPERTY(EditAnywhere)
    float HipMoveValue;
    
    UPROPERTY(EditAnywhere)
    float HipDownValue;
    
    UPROPERTY(EditAnywhere)
    float HipMoveTime;
    
    UPROPERTY(EditAnywhere)
    float HipMoveBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float HipMoveBlendOutTime;
    
    UEndAIIntentionContactSetting();
};

