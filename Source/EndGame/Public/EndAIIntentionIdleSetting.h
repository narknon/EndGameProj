#pragma once
#include "CoreMinimal.h"
#include "EndAIIntentionIdleBaseSetting.h"
#include "UObject/NoExportTypes.h"
#include "EndAIIntentionIdleSetting.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API UEndAIIntentionIdleSetting : public UEndAIIntentionIdleBaseSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AnimationWaitTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtCancelTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAtBlendTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtWaitTimeBiasInCaution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtBlendTimeBiasInCaution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtTargetRotationMinClampAngleInCaution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtTargetAdditiveRotationBiasInCaution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SaccadeTargetRotationBiasInCaution;
    
    UEndAIIntentionIdleSetting();
};

