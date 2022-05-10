#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCameraShake.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCameraShake : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LocationRangeX;
    
    UPROPERTY(EditAnywhere)
    float LocationRangeY;
    
    UPROPERTY(EditAnywhere)
    float LocationRangeZ;
    
    UPROPERTY(EditAnywhere)
    float LocationAmplitudeX;
    
    UPROPERTY(EditAnywhere)
    float LocationAmplitudeY;
    
    UPROPERTY(EditAnywhere)
    float LocationAmplitudeZ;
    
    UPROPERTY(EditAnywhere)
    float RotationRangeX;
    
    UPROPERTY(EditAnywhere)
    float RotationRangeY;
    
    UPROPERTY(EditAnywhere)
    float RotationRangeZ;
    
    UPROPERTY(EditAnywhere)
    float RotationAmplitudeX;
    
    UPROPERTY(EditAnywhere)
    float RotationAmplitudeY;
    
    UPROPERTY(EditAnywhere)
    float RotationAmplitudeZ;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float InnerRadius;
    
    UPROPERTY(EditAnywhere)
    float OuterRadius;
    
    UPROPERTY(EditAnywhere)
    float Falloff;
    
    FEndDataTableCameraShake();
};

