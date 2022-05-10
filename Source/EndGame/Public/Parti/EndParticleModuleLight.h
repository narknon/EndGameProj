#pragma once
#include "CoreMinimal.h"
#include "Particles/Light/ParticleModuleLightBase.h"
#include "EVfxEffectLightKind.h"
#include "Distributions/DistributionVector.h"
#include "Distributions/DistributionFloat.h"
#include "EndParticleModuleLight.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndParticleModuleLight : public UParticleModuleLightBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVfxEffectLightKind m_LightKind;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector m_Color;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_Intensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_SourceRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_AttenuationRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_SourceLength;
    
    UPROPERTY(EditAnywhere)
    float m_SourceLengthOffsetRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsBeamLight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bRenderVolumetricFogOnly: 1;
    
    UEndParticleModuleLight();
};

