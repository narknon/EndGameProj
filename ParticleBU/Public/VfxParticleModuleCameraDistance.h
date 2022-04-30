#pragma once
#include "CoreMinimal.h"
#include "Particles/Camera/ParticleModuleCameraBase.h"
#include "Distributions/DistributionVector.h"
#include "Distributions/DistributionFloat.h"
#include "VfxParticleModuleCameraDistance.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVfxParticleModuleCameraDistance : public UParticleModuleCameraBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fBeginDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fBlendDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIgnoreHeight: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector m_Scale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector m_ColorScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_AlphaScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bLuminanceScale: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_LuminanceScale;
    
    UVfxParticleModuleCameraDistance();
};

