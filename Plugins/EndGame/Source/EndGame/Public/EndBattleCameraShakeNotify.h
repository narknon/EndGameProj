#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EndBattleCameraShakeNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UEndBattleCameraShakeNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Cycle;
    
    UPROPERTY(EditAnywhere)
    float Power;
    
    UPROPERTY(EditAnywhere)
    float Decay;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float Inner;
    
    UPROPERTY(EditAnywhere)
    float Outer;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UEndBattleCameraShakeNotify();
};

