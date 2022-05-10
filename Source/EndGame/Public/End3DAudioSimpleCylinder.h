#pragma once
#include "CoreMinimal.h"
#include "End3DAudioSimpleCylinder.generated.h"

USTRUCT(BlueprintType)
struct FEnd3DAudioSimpleCylinder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    float HalfHeight;
    
    UPROPERTY(EditAnywhere)
    float HeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSendStateTriggerPlayingOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StateTriggerOnEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StateTriggerOnLeave;
    
    ENDGAME_API FEnd3DAudioSimpleCylinder();
};

