#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableAutoCameraLightInfo.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableAutoCameraLightInfo : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float OffsetX;
    
    UPROPERTY(EditAnywhere)
    float OffsetY;
    
    UPROPERTY(EditAnywhere)
    float OffsetZ;
    
    UPROPERTY(EditAnywhere)
    float Pitch;
    
    UPROPERTY(EditAnywhere)
    float Yaw;
    
    UPROPERTY(EditAnywhere)
    float Roll;
    
    UPROPERTY(EditAnywhere)
    float Distance;
    
    UPROPERTY(EditAnywhere)
    float Intensity;
    
    UPROPERTY(EditAnywhere)
    float LightR;
    
    UPROPERTY(EditAnywhere)
    float LightG;
    
    UPROPERTY(EditAnywhere)
    float LightB;
    
    UPROPERTY(EditAnywhere)
    float LightA;
    
    UPROPERTY(EditAnywhere)
    float InnerConeAngle;
    
    UPROPERTY(EditAnywhere)
    float OuterConeAngle;
    
    UPROPERTY(EditAnywhere)
    float AttenuationRadius;
    
    UPROPERTY(EditAnywhere)
    float SourceRadius;
    
    UPROPERTY(EditAnywhere)
    float SoftSourceRadius;
    
    UPROPERTY(EditAnywhere)
    float SourceLength;
    
    UPROPERTY(EditAnywhere)
    float Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColorTemperatureWhite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AffectsWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CastShadow;
    
    UPROPERTY(EditAnywhere)
    float IndirectLightingIntensity;
    
    UPROPERTY(EditAnywhere)
    float VolumetricScatteringIntensity;
    
    UPROPERTY(EditAnywhere)
    float ShadowResolutionScale;
    
    UPROPERTY(EditAnywhere)
    float ContactShadowLength;
    
    UPROPERTY(EditAnywhere)
    float ShadowBias;
    
    FEndDataTableAutoCameraLightInfo();
};

