#pragma once
#include "CoreMinimal.h"
#include "EndCameraRail.h"
#include "EndRCSActor.generated.h"

UCLASS(Blueprintable)
class AEndRCSActor : public AEndCameraRail {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StartBlendTime;
    
    UPROPERTY(EditAnywhere)
    float EndBlendTime;
    
    UPROPERTY(EditAnywhere)
    float ControllLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsrRollCorrection;
    
    UPROPERTY(EditAnywhere)
    float RollCorrectionMax;
    
    UPROPERTY(EditAnywhere)
    float PitchCorrectionMax;
    
    UPROPERTY(EditAnywhere)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DependentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCenterLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObeserveObjectName;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, float> HeliClampWeight;
    
    UPROPERTY(EditAnywhere)
    float BlendWeightBasedDist;
    
    AEndRCSActor();
};

