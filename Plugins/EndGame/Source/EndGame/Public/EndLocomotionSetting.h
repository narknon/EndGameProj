#pragma once
#include "CoreMinimal.h"
#include "EEndLocomotionState.h"
#include "EndLocomotionSetting.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndLocomotionSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BlendTime;
    
    UPROPERTY(EditAnywhere)
    TMap<EEndLocomotionState, float> PreStateOverrideBlendTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideUpperBodyBlend;
    
    UPROPERTY(EditAnywhere)
    float UpperBodyBlendTime;
    
    UPROPERTY(EditAnywhere)
    TMap<EEndLocomotionState, float> PreStateOverrideUpperBodyBlendTimes;
    
    UPROPERTY(EditAnywhere)
    float RotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSmoothRotationRate;
    
    UPROPERTY(EditAnywhere)
    float SmoothRotationRateMax;
    
    UPROPERTY(EditAnywhere)
    float SmoothRotationRateInputAngleMax;
    
    UPROPERTY(EditAnywhere)
    float InputBlockTime;
    
    FEndLocomotionSetting();
};

