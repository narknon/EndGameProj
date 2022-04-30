#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionVector.h"
#include "VfxParticleModuleFogBase.h"
#include "Distributions/DistributionFloat.h"
#include "VfxParticleModuleVolumetricFogProbe.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVfxParticleModuleVolumetricFogProbe : public UVfxParticleModuleFogBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Color: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Density: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_PositionJitter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_DensityModifier: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_Visibility;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_Radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_Color;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_Density;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_Tone;
    
    UPROPERTY(EditAnywhere)
    float m_PositionJitterStride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_PositionJitterAmplitude;
    
    UPROPERTY(EditAnywhere)
    float m_PositionJitterCycle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_PositionJitterTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bPositionJitterTimeRandom: 1;
    
    UPROPERTY(EditAnywhere)
    float m_DensityModifierStride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_DensityModifierIrregularity;
    
    UVfxParticleModuleVolumetricFogProbe();
};

