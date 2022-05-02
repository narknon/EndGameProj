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
    
    UPROPERTY(EditAnywhere)
    float LookAtCancelTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAtBlendTimeRange;
    
    UPROPERTY(EditAnywhere)
    float LookAtWaitTimeBiasInCaution;
    
    UPROPERTY(EditAnywhere)
    float LookAtBlendTimeBiasInCaution;
    
    UPROPERTY(EditAnywhere)
    float LookAtTargetRotationMinClampAngleInCaution;
    
    UPROPERTY(EditAnywhere)
    float LookAtTargetAdditiveRotationBiasInCaution;
    
    UPROPERTY(EditAnywhere)
    float SaccadeTargetRotationBiasInCaution;
    
    UEndAIIntentionIdleSetting();
};

